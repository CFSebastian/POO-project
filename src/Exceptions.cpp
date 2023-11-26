/*
 * Nume fisier:Exceptions.cpp
 * Autor: Colt Sebastian
 * Data: 24/11/2023
 * Descriere:
 */

#include "../headers/Exceptions.hpp"

 const char* ExceptionScoreNameLenght ::what() const noexcept {
    return "Name too long\n";
}
const char* ExceptionScoreNameSpecial ::what() const noexcept {
    return "Name uses special characters\n";
}