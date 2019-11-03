// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program plays the number guessing game with a loop


#include <iostream>
#include <string>

main() {
    // this will determine if value_1=random_int

    // Defining seed as the time using time(NULL)
    srand(time(NULL));

    // variables
    int random_int = rand() % 1 + 1;
    std::string value_1;
    int integervalue_1;

    // process
    while (true) {
        // input
        std::cout << "Guess a number of your choice" << std::endl;
        std::cin >> value_1;
        try {
            integervalue_1 = std::stoi(value_1);
        } catch (std::invalid_argument) {
            std::cout << "Please input only valid integers";
            break;
        }
        if (integervalue_1 == random_int) {
            // output
            std::cout << "You guessed correctly! The answer was: "
            << random_int <<std::endl;
            break;
        } else {
            std::cout << "You guessed incorrectly. ";
            std::cout << "";
        }
    }
}

