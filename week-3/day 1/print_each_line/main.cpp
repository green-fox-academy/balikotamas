#include <iostream>
#include <fstream>
#include <string>
int main()
{

    std::string line;
    std::ifstream file("../my-file.txt");
    if(file.is_open())
    {
        while(getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.close();
    }
    return 0;
}