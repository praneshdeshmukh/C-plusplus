

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    int firstRepeated(int arr[], int n) {
        
        // for(int i=0; i<n; i++) {
        //     bool eleIsRepeated = false; // initially- there is no repeated element
            
        //     for(int j=i+1; j<n; j++) {
        //         if(arr[i] == arr[j]) {
        //             eleIsRepeated = true;
        //             return i+1; // cz 1-based arr indexing
        //             // repeated el at = 1   repeated el at = 0  
        //             //return 2              return 1
        //         }
        //     }
        // }
        // return -1;
        
        // TC = O(N^2) - BAD
        
        // METHOD 2 - HASHING METHOD
        
        unordered_map<int , int>hash;
        for(int i=0; i<n ; i++) {
            hash[arr[i]]++; // creates a hash table containing 2 cols 
            // each element and no.of times it is repeated
        }
        
        for(int i=0; i<n ; i++) {
            if(hash[arr[i]] > 1) {
                return i+1;
            } 
        }
        return -1;
    }
};

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
