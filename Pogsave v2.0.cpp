// Pogsave v2.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "Windows.h"
namespace fs = std::filesystem;

int main()
{
    std::ofstream Pog("Pogsave.txt");
    Pog << "pogsave";
    Pog.close();
    int i = 0;
    fs::path p1 = fs::current_path();
    std::string path_to_destroy = p1.string();
    path_to_destroy += "x64";


    
    for (const fs::directory_entry& dir_entry : fs::recursive_directory_iterator(p1)) {
        std::cout << dir_entry << "\n";
        i++;
    }

    

}

