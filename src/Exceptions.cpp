//
// Created by sebas on 25.11.2023.
//

#include "../headers/Exceptions.hpp"

 const char* ExceptionScoreNameLenght ::what() const noexcept {
    return "Name too long\n";
}
const char* ExceptionScoreNameSpecial ::what() const noexcept {
    return "Name uses special characters\n";
}