#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

char getUsersChoice();
void showChoice(char player);
char getComputersChoice();
void showWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUsersChoice();
    std::cout<<"Your choice is ";
    showChoice(player);
    computer = getComputersChoice();
    std::cout<<"Computer choice is ";
    showChoice(computer);
    showWinner(player  , computer);

}

void showWinner(char player, char computer) {
    switch (player)
    {
        case 'r' : if(computer == 'r')
                    std::cout<<"It's a tie\n";
                    
                else if(computer == 's') 
                    std::cout<<"You Won\n";     
                else 
                    std::cout<<"You lose\n";     
            break;
        case 's' : if(computer == 'r')
                    std::cout<<"You lose\n";
                    
                else if(computer == 's') 
                    std::cout<<"It's a tie\n";     
                else 
                    std::cout<<"You Won\n";     
            break;

        case 'p' : if(computer == 'r')
                    std::cout<<"You Won\n";
                    
                else if(computer == 's') 
                    std::cout<<"You lose\n";     
                else 
                    std::cout<<"It's a tie\n";     
            break;
    }
} 

char getComputersChoice() {
    srand(time(0));
    int randChoice = (rand() % 3) + 1;
    
    switch (randChoice)
    {
    case 1 : return 'r';
    case 2 : return 's';
    case 3 : return 'p';
    }
}

void showChoice(char player) {
    switch (player)
    {
    case 'r':
        std::cout<<" Rock\n";
        break;
    case 'p':
        std::cout<<" Papers\n";
        break;
    case 's':
        std::cout<<" Scissors\n";
        break;
    }
} 
char getUsersChoice() {
   
   char player;

   do {
    std::cout<<"Rock Paper Scissors\n";
    std::cout<<"**************************************\n";

    std::cout<<"Choose one of the following\n";
    std::cout<<"r for Rock\n";
    std::cout<<"p for paper\n";
    std::cout<<"s for scissors\n";

    std::cin>>player;

   } while(player != 'r' && player != 's' && player != 'p');

   return player;

}