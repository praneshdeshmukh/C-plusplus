#include <iostream>

using namespace std;

int main()
{
    // Normal array : int arr[5]; 
    // char array : char ch[5];
    
    // Normal array
        // INPUT 
        // int arr[4];
        // for(int i=0; i<4; i++) {
        //     cin>>arr[i];
        // }
        // PRINT
        // for(int i=0; i<4; i++) {
        //     cout << arr[i] << endl;
        // }
    // char array
        // INPUT
        // char ch[5];
        // cin>>ch; 
        // cin >> ch[0];
        // cin >> ch[1]; 
        // PRINT
        // cout<<ch;
    
    // NULL CHARACHTER - '\0'
    char ch[5];
    cin >> ch; 
        /*
        input- |d|o|g|\0|
        */
    
        // Printing ASCII of NULL CHARACHTER
    for(int i=0; i<5; i++) {
        cout<<"At index "<<i<<": "<<ch[i]<<endl;
    }
        /*
        output- 
        At index 0: d
        At index 1: o
        At index 2: g
        At index 3: 
        At index 4:
        */
    
        /*Verifying NULL CHARACHTER at the end of array (last element)*/
    char temp = ch[5];
        /*Do Typecast*/
    int value = (int)temp;
    cout<<"Printing integer of null charachter value : "<<value<<endl;
        /*
        output-
        At index 0: d
        At index 1: o
        At index 2: g
        At index 3: 
        At index 4:
        Printing integer value : 0
        */
        /*ASCII of NULL charachter '\0* = 0.*/
    // --------------------------------------------------------------------------
        /*cin.getline(variableName, maxSizeofArray)*/
    // char arr[100];
    // cin.getline(arr,100);
    // cout<<arr;
    /* 
    input- Hello Good Morning !
    output- Hello Good Morning !(with spaces)
    */
    
    

    return 0;
}
