#include "Student.h"

Student::Student(std::string n, int a, int s) : Person(n, a) {
    name = n;
    age = a;
    studentNr = s;
}

int Student::getStudentNr() {
    return studentNr;
}