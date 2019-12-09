// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Dec 2019
// This program makes random number and finds average

#include <iostream>
#include <list>


int SmallestNumber(std::list<int> numbers) {
    // This is finds smallest number in a list

    int lastNumber = 0;
    int smallest = 0;

    for (int number : numbers) {
        if (number > lastNumber) {
            smallest = number;
            lastNumber = number;
        }
    }
    return smallest;
}

main() {
    // This is generate 10 random number from 0-10 and figures out averag

    // Sets seed as time
    srand(time(NULL));

    // variables
    int repeater;
    int number;
    int smallest;
    std::list<int> numbers;

    // process
    for (repeater = 0; repeater < 10; repeater++) {
        number = rand() % 100 + 1;
        numbers.push_back(number);
        // output
        std::cout << number << std::endl;
    }
    largest = SmallestNumber(numbers);

    // output
    std::cout << "\nThe largest is " << smallest << std::endl;
}