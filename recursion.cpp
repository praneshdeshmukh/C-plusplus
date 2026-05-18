#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>

// void walk(int steps);
// int main() {
    

//     walk(10);
//     return 0;
// }
// int count = 0;
// void walk(int steps) {
    
//     if(steps > 0) {
//         count++;
//         std::cout<<"You took a step! "<< count<< "\n" ;
//         walk(steps-1);
//     }
// }

int factorial(int number);
int main() {
    int number;
    std::cout<<"Enter a number : ";
    std::cin>>number;

    int result = factorial(number);

    std::cout<<result;
}
int factorial(int number){
    if(number==1) {
        return 1;
    }
    else {
        number = number * factorial(number-1);
    }
}