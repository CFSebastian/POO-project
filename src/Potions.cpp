//
// Created by sebas on 26.11.2023.
//

#include "../headers/Potions.hpp"

#include <iostream>
Potions::Potions(const std::string &name, int modifier, int type) : Item(name), modifier(modifier), type(type) {}

void Potions::print() {
    Item::print();
    std::cout<< this->type<<" "<<this->modifier<<'\n';
}
void Potions::use() {
    std::cout << "You used the potion: ";
    Item::print();
    std::cout << '\n';
    switch (this->type) {
        case 1: {
            std::cout << "healing";
            break;
        }
        case 2:
        {
            std::cout << "buffing";
            break;
        }
    }
}

