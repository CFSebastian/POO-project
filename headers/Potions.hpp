//
// Created by sebas on 26.11.2023.
//

#ifndef OOP_POTIONS_HPP
#define OOP_POTIONS_HPP

#include "Entity.hpp"
#include "Item.hpp"

class Potions : public Item{
    int modifier, type;
public:
    Potions()=default;
    ~Potions()=default;
    Potions(const std::string &name, int modifier, int type);
    void print();
    void use();
};


#endif //OOP_POTIONS_HPP
