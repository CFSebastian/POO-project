//
// Created by sebas on 25.11.2023.
//
#include <iostream>
#include "../headers/User.hpp"
int User::counter=0;
User::User( std::string name,int score) : name(name), score(score), id(++counter) {

    for(char c:name)
        if(!std::isalnum(c)) {
            throw ExceptionScoreNameSpecial();
        }
    if(std::size(name)>26) {
        std::cout<<std::size(name);
        throw ExceptionScoreNameLenght();
    }
}

int User::getScore() const {
    return score;
}

const std::string &User::getName() const {
    return name;
}


