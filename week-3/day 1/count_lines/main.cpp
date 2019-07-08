#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int counter(std::string stringFile);

int main()
{
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::cout << counter("../my-file.txt") << std::endl;
    return 0;
}

int counter(std::string stringFile)
{
    std::string line;
    std::ifstream file(stringFile);
    int numberLines = 0;
    if (file.is_open()) {
        while (getline(file, line)) {
            numberLines++;
        }
    } else {
        return 0;
    }
    file.close();

    return numberLines;
}
