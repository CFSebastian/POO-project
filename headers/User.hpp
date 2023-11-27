/*
 * Nume fisier:User.hpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#include <iostream>

#ifndef OOP_SCORE_HPP
//#define OOP_SCORE_HPP

#include "Exceptions.hpp"

class User {
    std::string name;
    //int score;
    int id=0;
    static int counter;
public:
    explicit User(const  std::string &name="");//,const int &score=0
///functions for interactions
   // const std::string &getName() const;

   // int getScore() const;
};


#endif //OOP_SCORE_HPP
