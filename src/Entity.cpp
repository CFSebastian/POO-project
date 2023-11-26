//
// Created by sebas on 24.11.2023.
//

#include "../headers/Entity.hpp"

//Entity * Entity::clone() {return new Entity(*this);}

Entity::Entity(const std::string &shape, const std::string &color) : shape(shape), color(color) {}

Entity::Entity(const Entity & ob) {
    this->shape = ob.shape;
    this->color = ob.color;
}
/*void Entity::afisare() {
    std::cout<<"Entity shape: "<<this->shape<<"; ";
    std::cout<<"Entity color: "<<this->color<<"; ";
}*/