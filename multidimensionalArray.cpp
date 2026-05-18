#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

int main() {
    std::string arr[][3] = {{"A", "B", "C"},
                             {"D", "E", "F"},
                             {"G", "H", "I"} };
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    for(int i=0; i<rows;i++) {
        for(int j=0; j<cols; j++) {
            std::cout<<arr[i][j] <<" ";
        }
        std::cout<<'\n';
    }

    return 0;
}