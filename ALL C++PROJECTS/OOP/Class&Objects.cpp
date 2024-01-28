#include <iostream>
#include <string>

// Step 1: Define the class
class Book {
private:
    // Step 2: Declare private data members
    std::string title;
    std::string author;
    int publicationYear;

public:
    // Step 3: Declare public member functions (methods)

    // Constructor (Step 4)
    Book(const std::string& t, const std::string& a, int year) {
        title = t;
        author = a;
        publicationYear = year;
    }

    // Getter methods (Step 5)
    std::string getTitle() const {
        return title;
    }

    std::string getAuthor() const {
        return author;
    }

    int getPublicationYear() const {
        return publicationYear;
    }

    // Setter methods (Step 6)
    void setTitle(const std::string& t) {
        title = t;
    }

    void setAuthor(const std::string& a) {
        author = a;
    }

    void setPublicationYear(int year) {
        publicationYear = year;
    }

    // Display method (Step 7)
    void displayBookDetails() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
    }
};

int main() {
    // Step 8: Create objects of the class
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);

    // Step 9: Access and modify object properties using methods
    book1.displayBookDetails();

    std::cout << "\nUpdating book1 title...\n";
    book1.setTitle("New Title for Book1");

    std::cout << "\nUpdated book1 details:\n";
    book1.displayBookDetails();

    return 0;
}




