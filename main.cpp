#include <iostream>

int main(void) {
    int bornData;
    int currentYear;

    std::cout << "At the first, enter current year: ";
    std::cin >> currentYear;
    std::cout << "And in the second, enter the date when you born: ";
    std::cin >> bornData;
    std::cout << "Your age is " << currentYear - bornData;
    
    return 0;
}
