#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>

class Human {
    public :
        std::string name;
        std::string job;
        int age;
    
        void eating() {
            std::cout<<"This human is eating\n";
        }
        void sleeping() {
            std::cout<<"This human is sleeping\n";
        }
        void learning() {
            std::cout<<"This human is learning\n";
        }
        void scrolling() {
            std::cout<<"this human is scrolling\n";
        }
};

int main() {
    Human human1;
    human1.name = "Pranesh";
    human1.age = 22;
    human1.job = "Software developer";

    std::cout<<human1.name<<"\n";
    std::cout<<human1.job<<"\n";
    std::cout<<human1.age<<"\n";

    human1.eating();
    human1.learning();
    return 0;
}