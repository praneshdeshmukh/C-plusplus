

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    int size = v.size();
    cout<< "Array printed is : " ; 
    for(int i=0; i<size ; i++) {
        cout <<v[i] << " " ;
    }
    cout<<endl;
}
void printVector2(vector<int> v) {
    cout << "Printing vector method 2 : " ;
    for(auto it:v) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    //// INSERT INTO vector (integer)

    // vector<int>v;
    // v.push_back(1);
    // v.push_back(22);
    // v.push_back(33);
    // v.push_back(44);
    // v.push_back(55);
    // printVector(v);
    // cout << endl << "Size : " <<v.size() <<endl;
    // cout << "Capacity : " <<  v.capacity() << endl;
    
    /// ------------------------------------------------------
    
    //// DELETE FROM vector

    // vector<int> v2;
    // v2.push_back(10);
    // v2.push_back(20);
    // v2.push_back(30);
    // v2.push_back(40);
    // v2.push_back(50);    
    // printVector(v2); // 10 20 30 40 50
    
    // cout<<endl;
    
    // v2.pop_back();  
    // printVector(v2); // 10 20 30 40
    
    // v2.pop_back(); 
    // printVector(v2); // 10 20 30
    
    /// ------------------------------------------------------
    
    //// CLEAR/DELETE vector
  
    // vector<int> v3;
    // v3.push_back(10);
    // v3.push_back(20);
    // v3.push_back(30);
    // v3.push_back(40);
    // v3.push_back(50);
    
    // printVector(v3); // 10 20 30 40 50
    
    // v3.clear();
    
    // printVector(v3);
    
    /// ------------------------------------------------------
    
    //// FETCH LAST AND FIRST ELEMENT IN vector
    
    vector<int> v3;
    v3.push_back(10);
    v3.push_back(20);
    v3.push_back(30);
    v3.push_back(40);
    v3.push_back(50);
    
    // 10 -> 20 -> 30 -> 40 -> 50
    
    cout << "Front element: " << v3[0] << endl; // 10 
    cout << "Front element: " << v3.front() << endl; // 10 
    cout << "End Element: " << v3[v3.size() - 1] << endl; // 50
    cout << "End Element: " << v3.back() << endl; // 50
    
    /// ------------------------------------------------------
    
    //// INSERT INTO vector (char)
    
    // vector<char> v4;
    // v4.push_back('a');
    // v4.push_back('b');
    // v4.push_back('c');
    // v4.push_back('d');
    // v4.push_back('e');
    
    // for(char i=0 ; i<v4.size() ; i++) {
    //     cout << "Array of chars is : " << v4[i] << " ";
    // }
    // cout<<endl;
    

    // ------------------------------------------------------ 

    //// VECTOR INITIALIZATION TYPES
    
    
    vector<int>arr; // default with no data, 0 size
    
    
    vector<int>arr2(5, -1); // initialize with n size with specific data
    printVector(arr2); // -1 -1 -1 -1 -1 
    
    
    arr2.push_back(50);
    printVector(arr2); // -1 -1 -1 -1 -1 50
 
    
    vector<int>arr3 = {1,2,3,4,5}; // 1 2 3 4 5
    
    arr3.pop_back();
    printVector(arr3); // 1 2 3 4

    
    vector<int>arr4{1,2,3,4,5};
   
    printVector(arr4); // 1 2 3 4 5

    // ------------------------------------------------------
    
    
    //// HOW TO COPY VECTOR INTO ANOTHER VECTOR
    
    vector<int> arr5 = {2,4,6,8,10};
    vector<int>arr6(arr5);
    
    printVector(arr6); // 2 4 6 8 10
    
    // ------------------------------------------------------
    
    
    //// PRINT USING FOR EACH
    vector<int> grr = {100, 200, 300, 400, 800, 600, 1200};
    printVector2(grr);
    
    
    
    return 0;
}
