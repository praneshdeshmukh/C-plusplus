#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>


int main() {
    char guess;
    int score=0;
    std::string questions[] = {"1. What year was C++ created?", 
                               "2. Who invented C++?",
                               "3. Who is the predecessor of C++?",
                               "4. Is Earth Flat?" };
    std::string options[][4] = { {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                 {"A. Guido Van Rossum", "B. Bjarne", "C. John Carter", "D. Dennis Ritchie"},
                                 {"A. C", "B. C--", "C. C#", "D. None"},
                                 {"A. Yes", "B. No", "C. Maybe", "D. I don't know"}
                                };
   char answers[] = {'C', 'B', 'A', 'D'};
   
   int size = sizeof(questions)/sizeof(questions[0]);

   for(int i=0; i<size ; i++) {
        std::cout<<"*******************************\n";
        std::cout<<questions[i]<<"\n";
        std::cout<<"*******************************\n";

        for(int j=0; j<sizeof(options[i])/sizeof(options[i][0]); j++ ) {
            std::cout<<options[i][j]<<"\n";
        }

        std::cin>>guess;
        guess = toupper(guess);

        if(guess == answers[i]) {
            std::cout<<"CORRECT : "<<guess<< "\n";
            score++;
        }
        else{
            std::cout<<"WRONG"<<"\n";
            std::cout<<"Answer : "<<answers[i]<<"\n";
        }
   }
   std::cout<<"*********************************\n";
   std::cout<<"**********RESULTS****************\n";
   std::cout<<"Correct : "<< score<<"\n";
   std::cout<<"Total questions : "<<size<<"\n";
   std::cout<<"Score : "<< (score/(double)size)*100<<"%\n";
   std::cout<<"*********************************\n";

   return 0;
}