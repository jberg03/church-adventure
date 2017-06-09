#include "StringCase.h"

std::string StringCase::toLower(std::string characters)
{
    std::string newString = "";

    for(int i = 0; i < characters.length(); ++i)
    {
        newString += std::tolower(characters[i], loc);
    }

    return newString;
}