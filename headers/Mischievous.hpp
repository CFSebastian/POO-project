/*
 * Nume fisier:Mischievous.hpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */

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
    /*Mischievous(const std::string &name,
                const std::string &description, const int& worth);*/
    Mischievous(const std::string &name,
                 std::string description, int worth);
    void print() override;
    ///functions for interactions
    void use() override;

};


#endif //OOP_MISCHIEVOUS_HPP
