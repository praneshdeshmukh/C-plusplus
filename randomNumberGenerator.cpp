#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>


int main() {

    // srand(time(NULL));

    // int dice = (rand() %6) + 1;

    // std::cout<<dice;

    // Number Guessing Game

    std::cout<<"***************Number Guessing Game****************\n";
    srand(time(NULL));
    int guess;
    int tries=0;
    int randomNum;

    randomNum = (rand()%100) + 1;

    do {
       std::cout<<"Guess a random number between (1-100) : ";
       std::cin>>guess;
       tries++;
       if(guess>randomNum) {
           std::cout<<"Too high\n";
       }
       else if(guess < randomNum) {
           std::cout<<"Too Low\n";
       }
       else {
           std::cout<<"CORRECT!\n";
       }
   } while(randomNum != guess);


    std::cout<<"You took "<<tries <<" tries\n";
    std::cout<<"*********************************\n";
    return 0;
}