//
// Created by sebas on 26.11.2023.
//

#ifndef OOP_MISCHIEVOUS_HPP
#define OOP_MISCHIEVOUS_HPP

#include "Item.hpp"

class Mischievous : public Item{
private:
    std::string description;
    int worth;
public:
    Mischievous()=default;
    ~Mischievous()=default;
    Mischievous(const std::string &name, const std::string &description, const int& worth);
    void use();
    void print();
};


#endif //OOP_MISCHIEVOUS_HPP
