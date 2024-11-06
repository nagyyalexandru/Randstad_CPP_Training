#include "Utility.h"

void Utility::printNumbers(const std::vector<int> &nums)
{
    for(int i = 0; i < nums.size(); ++i)
    {
        std::cout << nums[i] << " ";
    }

    printNewLine();
}

double Utility::averageOfNums(const std::vector<int> &nums)
{
    int sum = 0;
    
    for(int i = 0; i < nums.size(); ++i)
    {
        sum += nums[i];
    }

    return static_cast<double>(sum) / nums.size();
}

void Utility::printMessage(const std::string & message)
{
    std::cout << "Message from Utility class : " << message << std::endl;
}

void Utility::printCharacter(char character)
{
    for (int i = 0; i < NUM_OF_CHARS; ++i)
    {
        std::cout << character;
    }
    
    std::cout << std::endl;
}

void Utility::printNewLine()
{
    std::cout << std::endl;
}