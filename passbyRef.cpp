#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>

void swapPassByValue(std::string x, std::string y);
void swapPassByRef(std::string &x, std::string &y);
int main() {
    
    std::string x = "Fire";
    std::string y = "Water";
    
    swapPassByValue(x,y);
    swapPassByRef(x,y);
    
    std::cout<<"X : "<<x<<"\n";
    std::cout<<"Y : "<<y<<"\n";
    return 0;
}
void swapPassByValue(std::string x, std:: string y){

    std::string temp;
    temp = x;
    x=y;
    y=temp;
}
void swapPassByRef(std::string &x, std:: string &y){

    std::string temp;
    temp = x;
    x=y;
    y=temp;
}