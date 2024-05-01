/*
CSC 134

M6Lab2 - Arrays, Vectors, and linked lists
Mahamed Abdel
4/24/24

*/


#include <iostream>
#include <vector>

// Node structure that includes a vector
struct WeekNode {
    std::vector<int> dailyCounts;  // Vector to store daily car counts
    WeekNode* next;

    WeekNode(const std::vector<int>& counts) : dailyCounts(counts), next(nullptr) {}
};

// Linked list to manage weeks of car counts
class CarCounter {
public:
    WeekNode* head;
    int numberOfWeeks;

    CarCounter() : head(nullptr), numberOfWeeks(0) {}

    // Add a new week's car counts to the linked list
    void addWeek(const std::vector<int>& counts) {
        WeekNode* newNode = new WeekNode(counts);
        if (head == nullptr) {
            head = newNode;
        } else {
            WeekNode* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        numberOfWeeks++;
    }

    // Calculate total and average cars across all weeks
    // Calculate total and average cars across all weeks
void calculateTotalsAndAverages() {
    int grandTotal = 0;
    double grandAverage = 0;
    WeekNode* current = head;
    int currentWeek = 1;  // Initialize current week counter

    while (current != nullptr) {
        int weekTotal = 0;
        for (int count : current->dailyCounts) {
            weekTotal += count;
        }
        int daysInWeek = current->dailyCounts.size();
        double weekAverage = static_cast<double>(weekTotal) / daysInWeek;
        grandTotal += weekTotal;
        grandAverage += weekAverage;

        // Use currentWeek for displaying the week number
        std::cout << "Week " << currentWeek << ": Total = " << weekTotal << ", Average = " << weekAverage << std::endl;
        current = current->next;
        currentWeek++;  // Increment the week counter
    }

    if (numberOfWeeks > 0) {
        grandAverage /= numberOfWeeks;
        std::cout << "Overall: Total cars = " << grandTotal << ", Average cars per day = " << grandAverage << std::endl;
    }
}

    

    // Destructor to free linked list memory
    ~CarCounter() {
        WeekNode* current = head;
        while (current != nullptr) {
            WeekNode* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    CarCounter counter;
    int numWeeks = 3;  // Number of weeks to enter data for
    const int daysOfWeek = 5;  // Assume 5 working days per week

    for (int week = 1; week <= numWeeks; week++) {
        std::vector<int> weeklyCounts;
        std::cout << "Enter data for week " << week << std::endl;
        for (int day = 1; day <= daysOfWeek; day++) {
            int cars;
            std::cout << "Day " << day << ": ";
            std::cin >> cars;
            weeklyCounts.push_back(cars);
        }
        counter.addWeek(weeklyCounts);
    }

    counter.calculateTotalsAndAverages();
    return 0;
}
