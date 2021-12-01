// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Nov 2021
// This is a guessing game

#include <iostream>
#include <random>
#include <string>

int main() {
    // This function inputs guess and outputs if correct or not

    // define variables
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    const int NUM = idist(rgen);
    std::string integerAsString;
    int guess;

    // input

    std::cout << "Enter the number between 0-9: " ;
    std::cin >> integerAsString;    
    
    // process/output
    try {
        guess = std::stoi(integerAsString);
        if (guess == NUM) {
            std::cout << "You guessed correctly!" << std::endl;
        } else if (guess < 0 || guess > 9) {
            std::cout << "Please guess from 0-9" << std::endl;
        } else {
            std::cout << "Incorrect, the number was "  << NUM;
            std::cout << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << integerAsString << " is not an integer" 
        << std::endl;
    }
    
    // output finished
    std::cout << std::endl;
    std::cout << "Thank you for playing." << std::endl;
    std::cout << "Done." << std::endl;
}