//
// Created by sebas on 24.11.2023.
//
#include <iostream>
#include "../headers/Enemy.hpp"

Enemy::Enemy(const std::string &shape, const std::string &color,const std::string& mn, int mh, const int& ms, const int& md) : Entity(shape,color){
    this->enemyName = mn;
    this->enemyHealth = mh;
    this->enemySpeed =ms;
    this->enemyDamage = md;
}
Enemy::Enemy(const Enemy &m) : Entity(m) {
    this->enemyName = m.enemyName;
    this->enemyHealth = m.enemyHealth;
    this->enemySpeed =m.enemySpeed;
    this->enemyDamage = m.enemyDamage;
}
/*void Entity::afisare() {
    std::cout<<this->color;
    std::cout<<this->shape;
}*/
std::ostream& operator<<(std::ostream &out,const Enemy &m) {
    out<<"Enemy name: "<<m.enemyName<<"; ";
    out<<"Enemy health: "<<m.enemyHealth<<"; ";
    out<<"Enemy speed: "<<m.enemySpeed<<"; ";
    out<<"Enemy damage: "<<m.enemyDamage<<"\n";
    return out;
}

int Enemy::getEAttack() const {
    return enemyDamage;
}
void Enemy::E_Damage_Taken(const int& x) {
    enemyHealth=enemyHealth-x;
}