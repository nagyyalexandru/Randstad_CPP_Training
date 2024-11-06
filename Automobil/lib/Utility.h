#pragma once
#include <iostream>
#include <vector>

#define NUM_OF_CHARS 22

class Utility
{
public:
    static void printNumbers(const std::vector<int> &nums);
    static double averageOfNums(const std::vector<int> &nums);
    static void printMessage(const std::string &message);
    static void printCharacter(char character);
    static void printNewLine();
};
