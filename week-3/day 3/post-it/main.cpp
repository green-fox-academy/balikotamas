#include <iostream>
#include "PostIt.h"

int main()
{
    PostIt firstPostIt("orange", "Blue", "Idea 1");
    PostIt secondPostIt("Pink", "Black", "Awesome");
    PostIt thirdPostIt("Yellow", "Green", "Superb!");
    std::cout << firstPostIt.getBackground() << " " << firstPostIt.getTextColor() << " " << firstPostIt.getText() << std::endl;
    std::cout << secondPostIt.getBackground() << " " << secondPostIt.getTextColor()  << " " << secondPostIt.getText() << std::endl;
    std::cout << thirdPostIt.getBackground() << " " << thirdPostIt.getTextColor()  << " " << thirdPostIt.getText() << std::endl;

    return 0;
}