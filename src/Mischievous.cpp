/*
 * Nume fisier:Mischievous.cpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#include <iostream>
#include "../headers/Mischievous.hpp"
//Mischievous::Mischievous(const std::string &name, const std::string &description, int worth) : Item(name),description(description),worth(worth) {}

//old
/*Mischievous::Mischievous(const std::string &name, const std::string &description,
                         const int& worth): Item(name), description(description), worth(worth) {}*/
Mischievous::Mischievous(const std::string &name, std::string description, int worth)
        : Item(name), description(std::move(description)), worth(worth) {}

void Mischievous::print() {
    Item::print();
    std::cout<<this->worth<<'\n';
}
void Mischievous::use() {
    std::cout<<"You inspected a Mischievous item whit the description"<<"\n"<<this->description<<"\n"<<"It is worth:"<<this->worth<<"\n";
}
