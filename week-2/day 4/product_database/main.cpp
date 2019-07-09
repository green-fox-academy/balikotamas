#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(int argc, char* args[]) {
    std::map<std::string, int> shoppingList = {
            {"Eggs",    200},
            {"Milk",    200},
            {"Fish",    400},
            {"Apple",   150},
            {"Bread",   50},
            {"Chicken", 550},
    };
    //prices below 330
    std::map<std::string, int>::iterator i;
    std::vector<int> x = {};
    for (i = shoppingList.begin(); i != shoppingList.end(); i++) {
        if (i->second < 330) {
            x.push_back(i->second);
        }
    }
    std::cout << x.size() << std::endl;

    // average
    std::map<std::string, int>::iterator i2;
    std::vector<int> xy = {};
    for (i = shoppingList.begin(); i != shoppingList.end(); i++) {
        if (i->second > 0) {
            xy.push_back(i->second);
        }
    }
    int sum = 0;
    for (std::vector<int>::iterator it = xy.begin(); it != xy.end(); ++it) {
        sum += *it;
    }
    std::cout << sum / xy.size() << std::endl;

    //lowest

    int z = (*shoppingList.begin()).second;
    std::string min = (*shoppingList.begin()).first;
    std::map<std::string, int>::iterator it3;
    for (auto it = *shoppingList.begin(); it != *shoppingList.end(); it3++) {
        if (it.second < z) {
            min = it.first;
            z = it.second;
        }
    }
    std::cout << "The product with the lowest price: " << min << std::endl;

    //highest

    int y = (*shoppingList.begin()).second;
    std::string max = (*shoppingList.begin()).first;
    for (auto it = *shoppingList.begin(); it != *shoppingList.end(); i++) {
        if (it.second > y) {
            max = it.first;
            y = it.second;
        }
    }
    std::cout << "The product with the highest price: " << max << std::endl;
}





