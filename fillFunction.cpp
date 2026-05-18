#include<iostream>
#include<vector>
#include<cmath>
#include<ctime>

int main() {
    int SIZE = 100;
    std::string array[SIZE];
    fill(array, array+(SIZE/2), "pizza");
    fill(array+(SIZE/3), array+(SIZE/3)*2, "hamburger");
    fill(array+(SIZE/3)*2, array+SIZE, "hotdog");

    for(std::string ele : array) {
        std::cout<<ele<<" ";
    }
    return 0;
}