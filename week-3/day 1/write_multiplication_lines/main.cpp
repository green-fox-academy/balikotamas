#include <iostream>
#include <string>
#include <fstream>

void fileManipulator(std::string filename, std::string word, int);

int main()
{
    // Create a function that takes 3 parameters: a path, a word and a number
    // and is able to write into a file.
    // The path parameter should be a string that describes the location of the file you wish to modify
    // The word parameter should also be a string that will be written to the file as individual lines
    // The number parameter should describe how many lines the file should have.
    // If the word is "apple" and the number is 5, it should write 5 lines
    // into the file and each line should read "apple"
    std::string path;
    std::string word;
    int number;
    std::cout << "Please type in the file you wish to modify: " << std::endl;
    std::cin >> path;
    std::cout << "Please enter the word you want to write: " << std::endl;
    std::cin >> word;
    std::cout << "Please enter how many lines you want to add: " << std::endl;
    std::cin >> number;
    fileManipulator(path, word, number);
    return 0;
}

void fileManipulator(std::string filename, std::string word, int lines)
{
    std::ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < lines; ++i) {
            std::cout << word << std::endl;
        }
    }
    file.close();
}