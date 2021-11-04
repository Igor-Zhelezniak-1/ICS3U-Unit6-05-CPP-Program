// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Dec 2019
// This program program uses a list

#include <iostream>
#include <list>


main() {
    // this function uses a list

    std::list<int> marks;
    std::string integer1;
    std::list<int> reversedMarks;
    int mark;
    float average;
    int totalMark = 0;
    int markNumber = 0;

    // input
    std::cout << "Please enter 1 mark at a time. Enter -1 to end.";
    std::cout << std::endl;
    while (mark != -1) {
        std::cout << "What is your mark (as %): ";
        std::cin >> integer1;
        try {
            mark = std::stoi(integer1);
            if (mark < 0 && mark != -1 || mark > 100) {
                std::cout << "Invalid input" << std::endl;
            } else {
             marks.push_back(mark);
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid input" << std::endl;
        }
    }
    marks.pop_back();   // remove the "-1" that was added

    // reversed words
    for (int mark2 : marks) {
        reversedMarks.push_front(mark2);
        totalMark = totalMark + mark2;
        markNumber = markNumber + 1;
    }

    average = totalMark / markNumber;
    std::cout << "The average is " << average << "%" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
