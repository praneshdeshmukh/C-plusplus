#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>


struct student {
    std::string name = "John Doe";
    int age ;
    bool present;
};
int main() {

    student student1;
    student1.name = "Pranesh";
    student1.age = 22;
    student1.present = true;

    student student2;
    student2.name = "Ronaldo";
    student2.age = 40;
    student2.present = true;

    student student3;
    student3.name = "Sam Altman";
    student3.age = 28;
    student3.present = false;



    std::cout<< student1.name<<"\n";
    std::cout<< student1.age<<"\n";
    std::cout<< student1.present<<"\n";

    std::cout<< student2.name<<"\n";
    std::cout<< student2.age<<"\n";
    std::cout<< student2.present<<"\n";
    
    std::cout<< student3.name<<"\n";
    std::cout<< student3.age<<"\n";
    std::cout<< student3.present<<"\n";

    return 0;
}