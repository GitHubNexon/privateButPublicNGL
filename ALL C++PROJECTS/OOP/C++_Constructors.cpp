#include <iostream>
#include <string>

// Step 1: Define the class
class Car {
private:
    // Step 2: Declare private data members
    std::string model;
    std::string manufacturer;
    int year;

public:
    // Step 3: Constructors

    // Default constructor (Step 4)
    Car() {
        model = "Unknown";
        manufacturer = "Unknown";
        year = 0;
    }

    // Parameterized constructor (Step 5)
    Car(const std::string& carModel, const std::string& carManufacturer, int carYear) {
        model = carModel;
        manufacturer = carManufacturer;
        year = carYear;
    }

    // Step 6: Member functions

    // Display method
    void displayCarDetails() const {
        std::cout << "Model: " << model << std::endl;
        std::cout << "Manufacturer: " << manufacturer << std::endl;
        std::cout << "Year of Manufacture: " << year << std::endl;
    }
};

int main() {
    // Step 7: Create objects of the class using constructors

    // Creating a car using the default constructor
    Car defaultCar;

    // Creating a car using the parameterized constructor
    Car customCar("Mustang", "Ford", 2022);

    // Step 8: Access and display object properties
    std::cout << "Default Car Details:\n";
    defaultCar.displayCarDetails();

    std::cout << "\nCustom Car Details:\n";
    customCar.displayCarDetails();

    return 0;
}

