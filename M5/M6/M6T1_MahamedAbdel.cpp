/*
CSC 134
M6T1 - Cars
Mahamed Abdel
4/22/24

*/





#include <iostream>

// Function for Part 1: No arrays used
void countCarsWithoutArray() {
    int totalCars = 0;
    int dailyCars;
    const int daysOfWeek = 5;  // Monday to Friday

    for (int day = 1; day <= daysOfWeek; ++day) {
        std::cout << "Enter the number of cars for day " << day << ": ";
        std::cin >> dailyCars;
        totalCars += dailyCars;
    }

    std::cout << "Total cars from Monday to Friday: " << totalCars << std::endl;
    std::cout << "Average number of cars per day: " << static_cast<double>(totalCars) / daysOfWeek << std::endl;
}

// Function for Part 2: Using an array
void countCarsWithArray() {
    const int daysOfWeek = 5;  // Monday to Friday
    int cars[daysOfWeek];
    int totalCars = 0;

    for (int day = 0; day < daysOfWeek; ++day) {
        std::cout << "Enter the number of cars for day " << day + 1 << ": ";
        std::cin >> cars[day];
        totalCars += cars[day];
    }

    std::cout << "Total cars from Monday to Friday: " << totalCars << std::endl;
    std::cout << "Average number of cars per day: " << static_cast<double>(totalCars) / daysOfWeek << std::endl;

    std::cout << "Daily car counts:" << std::endl;
    for (int day = 0; day < daysOfWeek; ++day) {
        std::cout << "Day " << day + 1 << ": " << cars[day] << std::endl;
    }
}

int main() {
    std::cout << "Part 1: Counting cars without using arrays." << std::endl;
    countCarsWithoutArray();

    std::cout << "\nPart 2: Counting cars using an array." << std::endl;
    countCarsWithArray();

    return 0;
}
