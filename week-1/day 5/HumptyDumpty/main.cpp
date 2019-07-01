#include <iostream>


int main(int argc, char const *argv[]) {

    int dailyCodingHours = 6;
    int lengthOfTheSemester = 17;
    int workingDays = 5;
    int workingHoursWeekly = 52;
    int allCodingHours = dailyCodingHours * lengthOfTheSemester * workingDays;

    std::cout << "Hours spent with coding in the semester: " << allCodingHours << std::endl;
    std::cout << "Percentage of the coding hours: "
              << (float) allCodingHours / (lengthOfTheSemester * workingHoursWeekly) * 100 << std::endl;

}