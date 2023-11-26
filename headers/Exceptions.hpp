//
// Created by sebas on 25.11.2023.
//
#include <iostream>
#ifndef OOP_EXCEPTIONS_HPP
#define OOP_EXCEPTIONS_HPP


class ExceptionScoreNameLenght : public std::exception {
public:
    const char* what() const noexcept ;
};
class ExceptionScoreNameSpecial : public std::exception {
public:
    const char* what() const noexcept ;
};

#endif //OOP_EXCEPTIONS_HPP
