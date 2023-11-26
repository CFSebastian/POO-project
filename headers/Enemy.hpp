/*
 * Nume fisier: Enemy.hpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#include <iostream>
#ifndef OOP_ENEMY_HPP
#define OOP_ENEMY_HPP

#include "Entity.hpp"

class Enemy :public Entity {
private:
    std::string enemyName;
    int enemyHealth, enemySpeed, enemyDamage;
public:
    Enemy() = default;
    ~Enemy() = default;

    Enemy(const std::string &shape, const std::string &color,const std::string& mn, int mh, const int& ms, const int& md) ;
    Enemy(const Enemy &m) ;
    friend std::ostream& operator<<(std::ostream &out,const Enemy &m) ;
    ///functions for interactions
    int getEAttack() const ;
    //void afisare();
    void E_Damage_Taken(const int& x) ;

};


#endif //OOP_ENEMY_HPP
