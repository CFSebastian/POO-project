/*
 * Nume fisier: Exception.hpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere: In this header file you can fine all the exception calsses for this program
 */
#include <iostream>
#ifndef OOP_EXCEPTIONS_HPP
#define OOP_EXCEPTIONS_HPP


class ExceptionScoreNameLenght : public std::exception {
public:
    const char* what() const noexcept override;
};
class ExceptionScoreNameSpecial : public std::exception {
public:
    const char* what() const noexcept override;
};

#endif //OOP_EXCEPTIONS_HPP
