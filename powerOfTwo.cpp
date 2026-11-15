// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 26th Oct,2026
// This program asks the user for a whole number
// and calculates a number to the power of two in a for loop
// and catches errors that are not integers and displays it back to the user.

#include <cmath>
#include <iostream>
#include <limits>
#include <stdexcept>

int main() {
    // declare variables
    double inputNumber;
    int userNumber;
    int loopCounter;
    double powerOfTwo;

    // get user input
    std::cout << "Enter a whole number: ";

    // process and output, this also catches errors that
// may occur during user input
    try {
        if (!(std::cin >> inputNumber) ||
            inputNumber != std::floor(inputNumber) ||
            inputNumber > std::numeric_limits<int>::max()) {
            throw std::invalid_argument
            ("Invalid input. Please enter a valid integer.");
        }

        userNumber = static_cast<int>(inputNumber);
        if (inputNumber >= 0) {
            // Add the number once per loop to calculate its square.
            for (loopCounter = 0; loopCounter < userNumber; loopCounter++) {
                powerOfTwo += userNumber;
                std::cout << loopCounter << " time through loop." << std::endl;
            }
            std::cout << userNumber << " raised to the power of 2 is "
                      << powerOfTwo << std::endl;
        } else if (inputNumber < 0) {
            std::cout << "inputNumber is not a positive integer" << std::endl;
        }
    } catch (const std::invalid_argument& error) {
        std::cout << error.what() << std::endl;
    }

    return 0;
}
