#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

// void happyBirthday(std::string name, int age) {
//     std::cout<<"Happy Birthday "<<name << ", you are now "<<++age<<" years old";
// }
// int main() {
//     int age = 21;
//     std::string name = "Pranesh";
//     happyBirthday(name,age);
//     return 0;
// }

double square(double length) {
    return length*length;
}
double cube(double length) {
    return length*length*length;
}
int main() {

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout<<area<<"cm^2\n";
    std::cout<<volume<<"cm^2\n";

    return 0;

}