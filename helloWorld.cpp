#include <iostream>

 namespace first{
        int x = 1;    
    }
 namespace second {
        int x = 0;
  }
 
int main() {
    int x, y, sum;
    x=6;
    y=12;
    sum = x+y;


    double decimal = 7.69;
    char a = 'A';
    char b = 'B';
    char c = 'C';

    bool student = false;

    std::string name = "Pranesh";
    std::string fathername = "Ashok";
    std::string surname = "Deshmukh";

   
    // std::cout << x;
    // std::cout<<sum;
    // std::cout<<decimal;
    // std :: cout << a << ' ' << b << ' ' << c;

    if(!student) {
        std::cout << "You are not a student"<<'\n';
    }
    else {
        std::cout << "Welcome to student section"<< '\n';
    }

    std::cout<<"hello I am " << name << ' ' << fathername << ' ' << surname << '\n';

    std::cout << x << '\n';
    std::cout<<first::x<<'\n';
    std::cout<<second::x<<'\n';



    return 0;
}