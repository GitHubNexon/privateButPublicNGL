#include <iostream>
#include <string>
#include <ctime>

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

    // Method to update car details (Step 7)
    void updateCarDetails(const std::string& newModel, const std::string& newManufacturer, int newYear) {
        model = newModel;
        manufacturer = newManufacturer;
        year = newYear;
    }

    // Method to calculate the age of the car (Step 8)
    int calculateCarAge() const {
        // Assuming the current year is 2024
        int currentYear = 2024;
        return currentYear - year;
    }
};

int main() {
    // Step 9: Create objects of the class using constructors

    // Creating a car using the default constructor
    Car defaultCar;

    // Creating a car using the parameterized constructor
    Car customCar("Mustang", "Ford", 2022);

    // Step 10: Access and display object properties
    std::cout << "Default Car Details:\n";
    defaultCar.displayCarDetails();

    std::cout << "\nCustom Car Details:\n";
    customCar.displayCarDetails();

    // Step 11: Use class methods to update details and calculate age
    std::cout << "\nUpdating Custom Car Details...\n";
    customCar.updateCarDetails("Civic", "Honda", 2019);

    std::cout << "\nUpdated Custom Car Details:\n";
    customCar.displayCarDetails();

    std::cout << "\nAge of Custom Car: " << customCar.calculateCarAge() << " years\n";

    return 0;
}

