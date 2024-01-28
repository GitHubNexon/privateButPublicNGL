#include <iostream>
#include <string>

// Step 1: Define the class with public, private, and protected members
class MyClass {
public:
    // Public member
    int publicMember;

    // Public member function
    void publicMethod() {
        std::cout << "Public method called.\n";
    }

private:
    // Private member
    int privateMember;

    // Private member function
    void privateMethod() {
        std::cout << "Private method called.\n";
    }

protected:
    // Protected member
    int protectedMember;

    // Protected member function
    void protectedMethod() {
        std::cout << "Protected method called.\n";
    }
};

int main() {
    // Step 2: Create an object of the class
    MyClass myObject;

    // Step 3: Access public members and methods
    myObject.publicMember = 42;
    std::cout << "Public member value: " << myObject.publicMember << std::endl;
    myObject.publicMethod();

    // Note: Uncommenting the following lines will result in compilation errors
    // because private and protected members are not accessible from outside the class.
    
    // myObject.privateMember = 10;  // Error: 'int MyClass::privateMember' is private
    // myObject.privateMethod();     // Error: 'void MyClass::privateMethod()' is private
    
    // myObject.protectedMember = 20;  // Error: 'int MyClass::protectedMember' is protected
    // myObject.protectedMethod();     // Error: 'void MyClass::protectedMethod()' is protected

    return 0;
}

