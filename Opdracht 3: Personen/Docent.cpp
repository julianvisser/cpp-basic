#include "Docent.h"

Docent::Docent(std::string n, int a, int s) : Person(n, a){
    name = n;
    age = a;
    salary = s;
}

int Docent::getSalary() {
    return salary;
}
