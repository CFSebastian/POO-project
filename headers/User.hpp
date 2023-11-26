//
// Created by sebas on 25.11.2023.
//
#include <iostream>

#ifndef OOP_SCORE_HPP
//#define OOP_SCORE_HPP

#include "Exceptions.hpp"

class User {
    std::string name;
    int score;
    int id;
    static int counter;
public:
    User( std::string name="", int score=0);

    const std::string &getName() const;

    int getScore() const;
};


#endif //OOP_SCORE_HPP
