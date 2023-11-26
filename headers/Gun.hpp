//
// Created by sebas on 25.11.2023.
//
#include <iostream>
#ifndef OOP_BULLET_HPP
#define OOP_BULLET_HPP

//#include "Enemy.hpp"
#include "Entity.hpp"
//#include "Player.hpp"

class Gun : public Entity{
    std::string G_Name;
    int damage, magazine, recoil;

public:
    Gun() = default;
    ~Gun() = default;
    Gun(const std::string &shape, const std::string &color,const std::string& gn, const int& dmg, const int& mag, const int& recoil) ;
    friend std::ostream& operator<<(std::ostream& out, const Gun& gun);
    Gun& operator=(const Gun& g);
    //void use (Player &shooter, Enemy &target);
    int getDamage() const ;
    int getRecoil() const ;
    const std::string &getGNume() const ;

};


#endif //OOP_BULLET_HPP
