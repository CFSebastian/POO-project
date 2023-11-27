/*
 * Nume fisier:Potions.hpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#ifndef OOP_POTIONS_HPP
#define OOP_POTIONS_HPP

#include "Player.hpp"
#include "Item.hpp"

class Potions : public Item{
    int modifier, type;
public:
    Potions()=default;
    ~Potions()=default;
    Potions(const std::string &name, const int &modifier, const int &type);
    void print() override;
    ///functions for interactions
    void use() override;
    static void interact(const Player &target);
};


#endif //OOP_POTIONS_HPP
