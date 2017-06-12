#include <string>
#include <locale>

#ifndef STRINGCASE_H
#define STRINGCASE_H

class StringCase
{
    private:
        std::locale loc;
    
    public:
        std::string toLower(std::string characters);
};
#endif