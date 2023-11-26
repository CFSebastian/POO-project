/*
 * Nume fisier:User.cpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */
#include <iostream>
#include "../headers/User.hpp"
int User::counter=0;
User::User(const std::string &name,const int &score) : name(name), score(score), id(++counter) {

    for(char c:name)
        if(!std::isalnum(c)) {
            throw ExceptionScoreNameSpecial();
        }
    if(std::size(name)>26) {
        std::cout<<std::size(name)<<" >=26 -";
        throw ExceptionScoreNameLenght();
    }
}

int User::getScore() const {
    return score;
}

const std::string &User::getName() const {
    return name;
}


