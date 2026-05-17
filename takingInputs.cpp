#include <iostream>
#include <vector>

int main() {
    std::string name;
    int age;

    std::cout<<"What's your full name? : ";
    // std::cin>>name;
    std::getline(std::cin, name);
    
    std::cout<<"What's your age? : ";
    std::cin>>age;

    // if these questions are swapped -> problem
    // issue is , if we accept some user input with "CIN" followed by getline()
    // then in our input buffer there's a new line charachter 
    // and we don't pickup that newline charachter
    // when we reach the getline functin it accepts the newline charachter 
    // that's still within the buffer as input
    // SOlUTION = change in getline() function
    // getline(std::cin>>std::ws , name);
    // "ws" --- to remove any whitespaces before the userinput

    std::cout<<"hello "<<name<<'\n';
    std::cout<< "You are "<<age<< " years old";

    return 0;
}