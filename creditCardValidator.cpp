#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>


int sumOfOddDigits(const std::string cardNumber);
int sumOfEvenDigits(const std::string cardNumber);
int getDigit(const int number);

int main() {
    std::string cardNumber;
    int result = 0;
    
    std::cout<<"Enter a credit card number : ";
    std::cin>>cardNumber;
    
    result = sumOfOddDigits(cardNumber) + sumOfEvenDigits(cardNumber);

    if(result % 10 == 0) {
        std::cout << cardNumber <<" is valid";
    }
    else {
        std::cout << cardNumber << " is not valid";
    }
    return 0;
    
}

int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}
int sumOfOddDigits(const std::string cardNumber) {
    
    int sum = 0;
    for(int i=cardNumber.size()-1; i>=0; i-=2) {
        sum += cardNumber[i] - '0';
    }
    return sum;
    
    
}
int sumOfEvenDigits(const std::string cardNumber) {

    int sum = 0;
    for(int i=cardNumber.size()-2; i>=0; i-=2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}