#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> x = {
            {"978-1-60309-452-8", "A Letter to Jo"},
            {"978-1-60309-459-7", "Lupus"},
            {"978-1-60309-444-3", "Red Panda and Moon Bear"},
            {"978-1-60309-461-0", "The Lab"}
    };
    std::map<std::string, std::string>::iterator it;
    for (it = x.begin(); it != x.end(); ++it) {
        std::cout << it->second << " (ISBN: " << it->first << ")," << std::endl;
    }
    x.erase("978-1-60309-444-3");
    x.erase(x.find("Red Panda and Moon Bear"));
    std::map<std::string, std::string>::iterator it2;
    for (it = x.begin(); it != x.end(); ++it) {
        std::cout << it->second << " (ISBN: " << it->first << ")," << std::endl;
    }
    x["978-1-60309-450-4"] = "They Called Us Enemy";
    x["978-1-60309-453-5"] = "Why did we trust him?";

    if (x.find("478-0-61159-424-8") != x.end()) {
        std::cout << "There is an associated value with key 478-0-61159-424-8." << std::endl;
    } else {
        std::cout << "There is no associated value with key 478-0-61159-424-8." << std::endl;
    }
    std::cout << x["978-1-60309-453-5"] << std::endl;




    return 0;
}