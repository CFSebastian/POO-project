/*
 * Nume fisier:Potions.cpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */

#include "../headers/Potions.hpp"

#include <iostream>

Potions::Potions(const std::string &name, const int &modifier, const int &type) : Item(name), modifier(modifier), type(type) {}

void Potions::print() {
    Item::print();
    std::cout<< this->type<<" "<<this->modifier<<'\n';
}
void Potions::use() {
    std::cout << "You used the potion: ";
    Item::print();
    switch (this->type) {
        case 1: {
            std::cout << " and gained" <<this->modifier<<" health\n";
            break;
        }
        case 2:
        {
            std::cout << " and gained" <<this->modifier<<" strength\n";
            break;
        }
    }
}
 void Potions::interact(Player &target) {
    std::cout<<"you interacted with"<<target.getPAttack();
}

