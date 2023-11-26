//
// Created by sebas on 24.11.2023.
//
#include <iostream>
#ifndef OOP_ENTITY_HPP
#define OOP_ENTITY_HPP


class Entity {
private:
    std::string shape;
    std::string color;

public:
    Entity() = default;
    ~Entity() = default;
    Entity(const std::string &shape, const std::string &color);
    Entity (const Entity &m);
    //void afisare()=0;
    //virtual Entity * clone();

};


#endif //OOP_ENTITY_HPP
