#include <iostream>
#include "Student.h"
#include "Docent.h"

// Make instances of classes
Student student1 = Student("Julian", 19, 3036078);
Docent docent1 = Docent("Edwin", 99, 9999);
// I didn't dare to guess your age or salary, Edwin... Did I get close?

int main(){
    // Print all variables
    std::cout << "Name of student: " + student1.getName() << std::endl;
    std::cout << "Their age:" + student1.getAge() << std::endl;
    std::cout << "Their student number: " + student1.getStudentNr() << std::endl;

    std::cout << std::endl;

    std::cout << "Name of docent: " + docent1.getName() << std::endl;
    std::cout << "Their age:" + docent1.getAge() << std::endl;
    std::cout << "Their salary: " + docent1.getSalary() << std::endl;
}