#include <iostream>
#include <map>
#include <string>

int main() {
    std::map <std::string, std::string> phoneBook = {
            {"William A. Lathan", "405-709-1865"},
            {"John K. Miller", "402-247-8568"},
            {"Hortensia E. Foster",	"606-481-6467"},
            {"Amanda D. Newland", "319-243-5613"},
            {"Brooke P. Askew",	"307-687-2982"}
    };
    std::cout << "The phone number of John K. Miller: " << phoneBook.find("John K. Miller")-> second << std::endl;
    std::cout << "Whose phone number is: is 307-687-2982? ";
    std::map <std::string, std::string>::iterator it;
    for (it = phoneBook.begin(); it != phoneBook.end() ; ++it) {
        if (it->second == "307-687-2982") {
            std::cout << it->first;
            std::cout << "'s" << std::endl;
        }
    }
    if (phoneBook.find("Chris E. Myers") == phoneBook.end()) {
        std::cout << "We don't know Chris E. Meyers' number" << std::endl;
    }

    return 0;
}