#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

class Student {
    public : 
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main() {
    Student student1("Pranesh", 22 , 5.00);

    std::cout<<student1.name<<"\n";
    std::cout<<student1.age<<"\n";
    std::cout<<student1.gpa<<"\n";

    return 0;

}