//#pragma once
//#include "Person.h"
//
//class Student : public Person {
//private:
#pragma once
#include "Person.h"

class Student : public Person {
private:
    int studentNr;

public:

    Student(std::string n, int a, int s);
    int getStudentNr();
};