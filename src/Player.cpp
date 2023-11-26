/*
 * Nume fisier:Player.cpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#include <iostream>
#include "../headers/Player.hpp"


Player::Player(const std::string &shape, const std::string &color,const std::string& name, int hp, const int& sp, const int& pp,const Gun& pg) : Entity(shape, color) {
    this->name=name;
    this->health_points=hp;
    this->speed_points=sp;
    this->power_points=pp;
    this->pGun=pg;
}
 std::ostream& operator<<(std::ostream &out,const Player &p) {
    out<<"Player name: "<<p.name<<"; ";
    out<<"Player health: "<<p.health_points<<"; ";
    out<<"Player speed: "<<p.speed_points<<"; ";
    out<<"Player power: "<<p.power_points<<"; ";
    out<<"Player gun: "<<p.pGun.getGNume()<<"\n";
    return out;
}
int Player::getPAttack() const {
    return power_points*pGun.getDamage();
}
void Player::P_Damage_Taken(const int& x) {
    health_points=health_points-x;
}
int Player::getPRecoil() const {
    return pGun.getRecoil();
}
//Entity * Player::clone() { return new Player(*this); }
