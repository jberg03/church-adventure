#include <iostream>
#include <fstream>
#include <string>

#ifndef LEVELS_H
#define LEVELS_H

class LEVELS
{
    private:
        int width;
        int hieght;
        int floors;
        string[] levels;
        string[] lines;
        
    public:
        //variables
        int [][][] rooms;

        Levels();
        ~Levels();
        void readFile(std::string filePath);
        
};
#endif