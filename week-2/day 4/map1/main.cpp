#include <iostream>
#include <map>
#include <string>

int main() {
    std::map <int, char> map = {
    };
    std::cout << map.empty() << std::endl;
    map[97] = 'a';
    map[98] = 'b';
    map[99] = 'c';
    map[65] = 'A';
    map[66] = 'B';
    map[67] = 'C';

    std::map<int, char>::iterator it;
    for (it = map.begin(); it != map.end(); it++) {
        std::cout << "Keys are: " << it->first << std::endl;
    }
    std::map<int, char>::iterator it2;
    for (it2 = map.begin(); it2 != map.end(); ++it2){
        std::cout << "Values are: " << it2 -> second << std::endl;
    }
    std::cout << map.size() << std::endl;
    std::cout << "The associated with key 99: " << map[99] << std::endl;
    map.erase(97);
    if (map[100] == 1) {
        std::cout << "There is an associated value with key 100." << std::endl;
    } else {
        std::cout << "There is no associated value with key 100." << std::endl;
    }



    return 0;
    }