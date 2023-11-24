// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 24, 2023
// This program converts celsius to fahrenheit.

#include <iostream>
#include <string>

void CelsiusToFahrenheit() {
    // introduce program to the user
    std::cout << "This program converts celsius to fahrenheit.\n";

    // declare variables
    std::string celsiusStr;
    float celsiusFloat, fahrenheitFloat;

    // get celsius input from user
    std::cout << "Enter a temperature in celsius: ";
    std::cin >> celsiusStr;

    // try converting string to float
    try {
        celsiusFloat = std::stof(celsiusStr);

        // convert celsius to fahrenheit
        fahrenheitFloat = (celsiusFloat * 9/5) + 32;

        // tell user the celsius in fahrenheit
        std::cout << "" << celsiusFloat << "c is ";
        std::cout << fahrenheitFloat << "f." << std::endl;

    // catch invalid inputs from user
    } catch (std::invalid_argument) {
        std::cout << "" << celsiusStr << " is not a number." << std::endl;
    }
}

int main() {
    // call function
    CelsiusToFahrenheit();
}
