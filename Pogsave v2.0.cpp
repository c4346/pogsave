#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
namespace fs = std::filesystem;

int main()
{
    std::string format = ".txt";
    std::string path_to_destroy = "C://Code//c++//Pogsave v2.0//Pogsave v2.0//Test";

    
    for (const fs::directory_entry& dir_entry : fs::recursive_directory_iterator(path_to_destroy)) {
        std::cout << dir_entry;
        if (dir_entry.is_regular_file()) {
            std::cout << "  is a file\n\n";
        }
        else {
            std::cout << " is a directory  \n";
            std::ofstream Pog(dir_entry.path().string() + "\\Pogsave" + format);
            Pog << "hi";
            Pog.close();
            std::cout << "placed file at : " << dir_entry << "\n\n";
        }
    }
    
    

}

