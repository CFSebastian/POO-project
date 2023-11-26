//
// Created by sebas on 26.11.2023.
//
#include <iostream>
#include "../headers/Mischievous.hpp"
//Mischievous::Mischievous(const std::string &name, const std::string &description, int worth) : Item(name),description(description),worth(worth) {}

//old
Mischievous::Mischievous(const std::string &name, const std::string &description, const int& worth): Item(name), description(description), worth(worth) {}
void Mischievous::print() {
    Item::print();
    std::cout<<this->worth;
}
void Mischievous::use() {
    std::cout<<"You inspected a Mischievous item whit the description"<<"\n"<<this->description<<"\n"<<"It is worth:"<<this->worth<<"\n";
}
