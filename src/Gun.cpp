//
// Created by sebas on 25.11.2023.
//
#include <iostream>
#include "../headers/Gun.hpp"
/*
Gun::Gun(const std::string& gn, const int& dmg, const int& mag, const int& recoil) : Item(gn){
    this->damage=dmg;
    this->magazine=mag;
    this->recoil=recoil;
}
std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    //out<<"Gun name: "<<gun.G_Name<<"; ";
    out<<"Gun damage: "<<gun.damage<<"; ";
    out<<"Gun magazine capacity: "<<gun.magazine<<"; ";
    out<<"Gun recoil: "<<gun.recoil<<"\n";
    return out;
}
Gun& Gun::operator=(const Gun& g) {
    //this->G_Name = g.G_Name;
    this->damage = g.damage;
    this->magazine =g.magazine;
    this->recoil =g.recoil;
    return *this;
}
int Gun:: getDamage() const {
    return damage;
}
int Gun::getRecoil() const {
    return recoil;
}*/
/*const std::string &Gun::getGNume() const {
    return G_Name;
}*/

Gun::Gun(const std::string &shape, const std::string &color,const std::string& gn, const int& dmg, const int& mag, const int& recoil) : Entity(shape, color) {
    this->G_Name=gn;
    this->damage=dmg;
    this->magazine=mag;
    this->recoil=recoil;
}
std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out<<"Gun name: "<<gun.G_Name<<"; ";
    out<<"Gun damage: "<<gun.damage<<"; ";
    out<<"Gun magazine capacity: "<<gun.magazine<<"; ";
    out<<"Gun recoil: "<<gun.recoil<<"\n";
    return out;
}
Gun& Gun::operator=(const Gun& g) {
    this->G_Name = g.G_Name;
    this->damage = g.damage;
    this->magazine =g.magazine;
    this->recoil =g.recoil;
    return *this;
}
int Gun:: getDamage() const {
    return damage;
}
int Gun::getRecoil() const {
    return recoil;
}
const std::string &Gun::getGNume() const {
    return G_Name;
}
/*void Gun::use(Player &shooter, Enemy &target) {
    std::cout<<"You shot the gun\n";
}*/
