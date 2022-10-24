// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program asks for the users age and tells you if you could
// date their grandchild
#include <iostream>

int main() {
    // declare variables
    int age;
    std::string ageAsAString;

    // display the starting message
    std::cout << "Hey so you want to marry our grandchild," <<
    " I have a question for you. \n";

    // Get the users input for their age
    std::cout << "Enter your age: ";
    std::cin >> ageAsAString;

    // try catch to make sure the input was an integer
    try {
        age = std::stoi(ageAsAString);

        // If statement to make sure input wasn't 0 or a negative
        if (age > 0) {
            // if statement to make sure age is within range
            if (age > 40 || age < 25) {
                // # if statement to check if too old or too young
                if (age > 40) {
                    std::cout << "\nYou are too old for my grandchild";
                } else if (age < 25) {
                    std::cout << "\n You are too young for my grandchild";
                } else {
                    std::cout << "\n";
                }
            } else {
                std::cout << "\nYou can date my grandchild!";
            }
        } else {
            std::cout << "Your age cannot be 0 or a negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "\nWhat you entered wasn't an integer";
    }
    std::cout << "\nThanks for playing!";
}
