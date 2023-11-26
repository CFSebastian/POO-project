//
// Created by sebas on 26.11.2023.
//
#include <iostream>
#ifndef OOP_ITEM_HPP
#define OOP_ITEM_HPP


class Item {
private:
   std::string name;
public:
    Item()=default;
    ~Item()=default;
    explicit Item(const std::string &name);
    virtual void use();
    virtual void print();
};


#endif //OOP_ITEM_HPP
