#include <iostream>
#include<string.h>
using namespace std;

// FIND LENGTH OF STRING
int findLength(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0') {
        index++;
    }
    return index;
}
/*
input-  This is my daily Routine
output- Length of string : 24
*/

// REVERSE STRING
void reverseString(char ch[], int size){
    int i=0;
    int j=size-1;
    
    while(i<=j) {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
/*
input-  Pranesh
output- hsenarP
*/

// CONVERT STRING TO UPPER CASE
void convertToUp(char ch[]) {
    int index=0;
    while(ch[index] != '\0') {
        char currindex = ch[index];
        if(currindex >='a' && currindex <= 'z') {
            ch[index] = currindex - 'a' + 'A';
        }
        index++;
    }
}
/*
input-  pranesh deshmukh
output- PRANESH DESHMUKH
*/

// REPLACE @ with a space

int main()
{
    // Length of String
    char ch[100];
    cin.getline(ch,100);
    // Built-in Function: strlen();
    // cout<<strlen(ch); // 24
    int len= findLength(ch,100);
    // cout<<"Length of string : "<<len<<endl;
    // reverseString(ch,len);
    // cout<<ch<<endl;
    convertToUp(ch);
    cout<<ch<<endl;
    return 0;
}
