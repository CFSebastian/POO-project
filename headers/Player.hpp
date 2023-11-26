/*
 * Nume fisier:Player.hpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#include <iostream>
#ifndef OOP_PLAYER_HPP
#define OOP_PLAYER_HPP

#include "Entity.hpp"
#include "Gun.hpp"

class Player : public Entity {
private:
    std::string name;
    int health_points,speed_points,power_points;
    Gun pGun;
public:
    Player() = default;
    ~Player() = default;

    Player(const std::string &shape, const std::string &color,
           const std::string& name, int hp, const int& sp, const int& pp,const Gun& pg) ;
    friend std::ostream& operator<<(std::ostream &out,const Player &p) ;
    ///functions for interactions
    int getPAttack() const ;
    void P_Damage_Taken(const int& x) ;
    int getPRecoil() const ;
   // Entity * clone() override;

};



#endif //OOP_PLAYER_HPP
