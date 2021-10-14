// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program calculates percentage of a level ex: 4+ == 97%

#include <iostream>

int LevelCalculator(std::string level_input_string) {
    // this function calculates percentage of a level ex: 4+ == 97%

    int percent;

    // process

    if (level_input_string == "4+") {
        percent = 97;
    } else if (level_input_string == "4") {
        percent = 90;
    } else if (level_input_string == "4-") {
        percent = 83;
    } else if (level_input_string == "3+") {
        percent = 78;
    } else if (level_input_string == "3") {
        percent = 75;
    } else if (level_input_string == "3-") {
        percent = 71;
    } else if (level_input_string == "2+") {
        percent = 68;
    } else if (level_input_string == "2") {
        percent = 65;
    } else if (level_input_string == "2-") {
        percent = 61;
    } else if (level_input_string == "1+") {
        percent = 58;
    } else if (level_input_string == "1") {
        percent = 55;
    } else if (level_input_string == "1-") {
        percent = 51;
    } else if (level_input_string == "R") {
        percent = 25;
    } else {
        percent = -1;
    }

    return percent;
}

int main() {
    // this function gets level_input_string
    std::string level_input_string_from_user;
    int returned_percentage;

    // input

    std::cout << "Enter a level you would like to convetrt to a percent: ";
    std::cin >> level_input_string_from_user;

    // call functions
    returned_percentage = LevelCalculator(level_input_string_from_user);

    // output
    std::cout << "That would be a " << returned_percentage << "%." << std::endl;
    std::cout << "\nDone.";
}
