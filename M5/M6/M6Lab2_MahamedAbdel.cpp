/*
CSC 134

M6Lab2 - Arrays, Vectors, and linked lists
Mahamed Abdel
4/24/24

*/


#include <iostream>
#include <vector>

void countCarsWithVector() {
    std::vector<int> carCounts;
    int carsForDay;
    const int daysOfWeek = 5;  // Monday to Friday
    int totalCars = 0;

    for (int day = 0; day < daysOfWeek; ++day) {
        std::cout << "Enter the number of cars for day " << day + 1 << ": ";
        std::cin >> carsForDay;
        carCounts.push_back(carsForDay);
        totalCars += carsForDay;
    }

    double averageCars = static_cast<double>(totalCars) / daysOfWeek;

    std::cout << "Total cars from monday to friday: " << totalCars << std::endl;
    std::cout << "Average number of cars per day: " << averageCars << std::endl;

    std::cout << "Daily car counts:" << std::endl;
    for (int day = 0; day < daysOfWeek; ++day) {
        std::cout << "Day " << day + 1 << ": " << carCounts[day] << std::endl;
    }
}

int main() {
    std::cout << "Counting cars using a vector:" << std::endl;
    countCarsWithVector();
    return 0;
}
