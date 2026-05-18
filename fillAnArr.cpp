#include<iostream>
#include<cmath>
#include<ctime>
#include<vector>

int main() {
    std::string array[5];
    int size = sizeof(array) / sizeof(array[0]);
    std::string temp;
    for(int i=0; i<size; i++) {
        std::cout<<"Enter a food you like #"<<i+1<<" : ";
        std::getline(std::cin, temp);
        if(temp == "q") {
            break;
        }
        else{
            array[i] = temp;
        }
    }
    std::cout<<"You chose the following items : \n";
    for(int i=0; !array[i].empty(); i++){
        std::cout<<array[i]<<'\n';
    }

    return 0;
}
