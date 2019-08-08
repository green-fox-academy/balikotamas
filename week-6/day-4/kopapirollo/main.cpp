#include <iostream>
#include "map"

int main() {

    std::map <std::string, std::string> kopapirollo;
    std::map <int, std::string> list;
    kopapirollo = { {"koollo","win"},{"kopapir","lost"},{"koko","tie"},{"olloko","lost"},{"olloollo","tie"},{"ollopapir","win"} ,{"papirko","win"},{"papirpapir","tie"},{"papirollo","lost"} };
    list = { {1,"ko"},{2,"papir"},{3,"ollo"} };

    int computerNumb = rand() % 3 + 1;
    std::string player;
    std::cout << "Valassz: ko, papir, ollo ";
    std::cin  >> player;
    std::cout << std::endl;

    std::string computer = list.find(computerNumb)->second;
    std::cout << "A szgep ezt nyomja: " << computer << std::endl;

    std::string result = kopapirollo.find(player + computer)->second;
    std::cout << result << std::endl;

    return 0;
}