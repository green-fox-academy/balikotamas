#include <iostream>
#include <fstream>
#include <string>

int main()
{
 
    std::string name = {
            "Balikó Tamás"
    };
    std::ofstream file("../my-file.txt", std::ios::app);
    if (file.is_open()) {
        file << name << std::endl;
    }
    file.close();


    return 0;
}