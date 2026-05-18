#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

struct car {
    std::string model;
    int year;
    std::string color;
};

void printCar(car &car);
void paintCar(car &car, std::string color);
int main() {

    car car1;
    car1.model = "Mustang";
    car1.year  = 1968;
    car1.color = "Black";

    car car2;
    car2.model = "Porche";
    car2.year = 1895;
    car2.color = "Red";

    printCar(car1);
    printCar(car2);
    paintCar(car1, "yellow");
    paintCar(car2, "white");

    return 0;
}

void printCar(car &car) {
    std::cout<<car.model<<"\n";
    std::cout<<car.year<<"\n";
    std::cout<<car.color<<"\n";
    std::cout<<"*******************************\n";
}

void paintCar(car &car, std::string color) {
    car.color = color;
    std::cout<<car.model<<"\n";
    std::cout<<car.year<<"\n";
    std::cout<<car.color<<"\n";
    std::cout<<"*******************************\n";
}