#include <string>
#include <locale>

class StringCase
{
    private:
        std::locale loc;
    
    public:
        std::string toLower(std::string characters);
};