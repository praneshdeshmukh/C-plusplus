
#include <iostream>
#include <vector>
using namespace std;

void WavePrintTwoDmatrix(vector<vector<int>>v) {
    
    int size = v.size();
    int TotalCols = v[0].size();
    
    cout << "Normally printing 2D Array : " << endl;
    for(int i=0; i<size; i++) {
        for(int j=0 ; j<size; j++) {
                cout<<v[i][j]<<" ";
        }
    }
    cout << endl;
    cout << endl;
    
    cout << "Wave printing 2D Array : " << endl;
    for(int startCol=0; startCol<TotalCols; startCol++) {
        if((startCol % 2) == 0) {
            for(int col=0; col<size; col++) {
                cout<<v[col][startCol]<<" ";
            }
        }
        else {
            
            for(int row=size-1; row>=0; row--) {
                cout << v[row][startCol]<<" ";
            }
        }
    }
}
int main()
{
    
    vector<vector<int>>v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };
    
     

    WavePrintTwoDmatrix(v);
    return 0;
}
