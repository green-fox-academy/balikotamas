#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(int argc, char* args[])
{
    std::vector<std::string> names;
    std::cout << names.size() << std::endl;
    names.push_back("William");
    if (names.empty()){
        std::cout << "The list is empty" << std::endl;
    }
    names.push_back("John");
    names.push_back ("Amanda");
    std::cout << names.size() << std::endl;
    std::cout << names[3] << std::endl;
    for (int i = 0; i < names.size(); ++i){
        std::cout << names[i] << std::endl;
    }
    for (int i = 0; i < names.size(); ++i) {
        std::cout << i + 1 << ". " << names[i] << std::endl;
    }
    names.erase(names.begin()+1);
    for (int i = names.size()-1 ;  i >= 0; --i) {
        std::cout << names[i] <<std::endl;

    }

}
