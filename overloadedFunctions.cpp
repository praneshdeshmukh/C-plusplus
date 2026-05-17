#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

void bakePizza();
void bakePizza(std::string toppings1);
void bakePizza(std::string toppings1, std::string toppings2);

int main() {
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");

    return 0;
}
void bakePizza() {
    std::cout<<"Here's your Pizza\n";
}
void bakePizza(std::string toppings1) {
    std::cout<<"Here's your Pizza with "<<toppings1<<" topping\n";
}
void bakePizza(std::string toppings1,std::string toppings2) {
    std::cout<<"Here's your Pizza with "<<toppings1<<" and "<<toppings2<< " toppings\n";
}

