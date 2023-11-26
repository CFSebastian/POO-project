//
// Created by sebas on 26.11.2023.
//

#include "../headers/Item.hpp"


//old
Item::Item(const std::string &name) : name(name) {}
void Item::use() {
std::cout<<"The item has ben destroid\n";
}
void Item::print() {
    std::cout<<this->name<<" ";
}
