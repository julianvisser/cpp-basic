#pragma once
#include "Person.h"

class Docent : public Person {
    private:
    int salary;
 
    public:
    
    Docent(std::string n, int a, int s);
    int getSalary();
};
