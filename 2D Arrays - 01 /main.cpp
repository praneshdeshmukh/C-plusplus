

#include <iostream>
#include <limits.h>
using namespace std;

void printRowise(int arr[][4], int row, int col) {
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }   
}

void printColwise(int arr[][4], int row, int col) {
    
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout<< arr[j][i] << " ";
        }
        cout<<endl;
    }   
}

void printDigowise(int arr[][4], int row, int col) {
    
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(arr[i][j] == arr[i][j])
            {
                cout<< arr[i][i] << " "; // 1 6 12
                break;
            }
        }
    }   
}

void twoDArrayInput(int arr[][4], int row, int col) {
    cout << "input - ";
    
    // ROWISE INPUT
    // for(int i=0; i<row; i++) {
    //     for(int j=0; j<col; j++) {
    //         cin>>arr[i][j];
    //     }
    // }
    // printRowise(arr, row, col);
    
    
    //  //input - 11 12 13 14 15 16 17 18 19 20 21 22 23 24
    
    // 11 12 13 14 
    // 15 16 17 18 
    // 19 20 21 22
    
    // ------------------------------------------------------------
    
    // COLWISE INPUT
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cin>>arr[j][i];
        }
    }
    // printColwise(arr, row, col);
    
    // // input - 11 12 13 14 15 16 17 18 19 20 21 22 23 24

    // 11 12 13 
    // 14 15 16 
    // 17 18 19 
    // 20 21 22 
        
}

void RowWiseSum(int arr[3][4], int row, int col) {
    
    // twoDArrayInput(arr, row, col);
    
    int sum=0;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            sum = sum + arr[i][j];
        }
    }
    cout<< "Sum of row is = " << sum <<endl;
}
void ColWiseSum(int arr[][4], int row, int col) {
    
    // twoDArrayInput(arr, row, col);
    
    int sum=0; 
    for(int i=0;i<col;i++) {
        for(int j=0; j<row; j++) {
            sum = sum + arr[j][i];
        }
    }
    cout<< "Sum of col is = " << sum <<endl;
}

void DigowiseSum(int arr[3][3], int row, int col) {
    
    // twoDArrayInput(arr, row, col);
    
    int sum=0; 
    for(int i=0;i<row;i++) {
        
            sum = sum + arr[i][i]; // 12 + 6 + 1 = 19
    
    }
    cout<< "Sum of Digonal is = " << sum <<endl;
}

void findMin(int arr[][4], int row, int col) {
    int minAns = INT_MAX;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(arr[i][j] < minAns) {
                minAns = arr[i][j];
            }
        }
    }
    cout << "Minimum element is = " << minAns << endl;
}   
void findMax(int arr[][4], int row, int col) {
    int maxAns = INT_MIN;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(arr[i][j] > maxAns) {
                maxAns = arr[i][j];
            }
        }
    }
    cout << "Maximum element is = " << maxAns << endl;
}  
int main()
{
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {10,11,12,13}
    };
    int row = 3;
    int col = 4;
    // printRowise(arr, row, col);
    // printColwise(arr, row, col);
    // printDigowise(arr,row ,col);
    // twoDArrayInput(arr, row, col); 
    // RowWiseSum(arr, row ,col);
    // ColWiseSum(arr, row ,col);
    //  int brr[3][3] = {
    //     {1, 2, 3},
    //     {5, 6, 7},
    //     {10,11,12}
    // };
    // DigowiseSum(brr, row , col);
    // findMin(arr, row , col); // 1
    findMax(arr,row,col);       // 13
    
    

    return 0;
}
