#include "Main.h"

int main()
{
    std::string answer = "";

    //Title
    std::cout << "                    ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n";
    std::cout << "                    ┃         Church Adventure            ┃\n";
    std::cout << "                    ┃     Your First Time in Church       ┃\n";
    std::cout << "                    ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n\n\n";

    while(playing)
    {
        //Ask player if they still want to play
        getline(std::cin, answer);

        if(answer != "")
        {
            if(caseChanger.toLower(answer) == "y")
            {
                playing = true;
            }
            else if(caseChanger.toLower(answer) == "n")
            {
                playing = false;
            }
            else
            {
                std::cout << "Please type 'Y' or 'N' and press enter.\n";
            }
        }
        else
        {
            std::cout << "Please type 'Y' or 'N' and press enter.\n";
        }
    }
}