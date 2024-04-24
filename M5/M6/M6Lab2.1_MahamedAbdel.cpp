/*
CSC 134

M6Lab2 - Arrays, Vectors, and linked lists
Mahamed Abdel
4/24/24

*/






#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Linked list class
class CarCounter {
public:
    Node* head;
    int length;

    CarCounter() : head(nullptr), length(0) {}

    // Function to add elements to the linked list
    void addCarCount(int count) {
        Node* newNode = new Node(count);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
        length++;
    }

    // Function to calculate total cars
    int calculateTotal() {
        int total = 0;
        Node* current = head;
        while (current != nullptr) {
            total += current->data;
            current = current->next;
        }
        return total;
    }

    // Function to calculate average car count
    double calculateAverage() {
        if (length == 0) return 0;
        return static_cast<double>(calculateTotal()) / length;
    }

    // Destructor to free memory
    ~CarCounter() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    CarCounter counter;
    const int daysOfWeek = 5;  // Monday to Friday

    for (int day = 1; day <= daysOfWeek; day++) {
        int cars;
        std::cout << "Enter the number of cars for day " << day << ": ";
        std::cin >> cars;
        counter.addCarCount(cars);
    }

    std::cout << "Total cars from Monday to Friday: " << counter.calculateTotal() << std::endl;
    std::cout << "Average number of cars per day: " << counter.calculateAverage() << std::endl;

    return 0;
}
