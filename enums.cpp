#include <iostream>
#include<vector>
#include<cmath>
#include<ctime>


enum Day {sunday = 0, monday=1, tuesday=2, wednesday=3,thursday=4, friday=5, saturday=6};
int main() {

    Day today = thursday;

    switch(today) {
        case sunday : std::cout<<"It's Sunday today";
                      break;   
        case monday : std::cout<<"It's monday today";
                      break;   
        case tuesday : std::cout<<"It's tuesday today";
                      break;   
        case wednesday : std::cout<<"It's wednesday today";
                      break;   
        case thursday : std::cout<<"It's thursday today";
                      break;   
        case friday : std::cout<<"It's friday today";
                      break;   
        case saturday : std::cout<<"It's saturday today";
                      break;   
    }

}