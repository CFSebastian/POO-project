/*
 * Nume fisier: Item.hpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#include <iostream>
#ifndef OOP_ITEM_HPP
#define OOP_ITEM_HPP


class Item {
private:
   std::string name;
public:
    Item()=default;
    virtual ~Item()=default;
    explicit Item(const std::string &name);
    virtual void print();
    ///functions for interactions
    virtual void use();

};


#endif //OOP_ITEM_HPP
