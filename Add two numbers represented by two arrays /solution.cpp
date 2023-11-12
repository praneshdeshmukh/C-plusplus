// Expected Time Complexity: O(N + M).

// Input : A[] = {1, 2}, B[] = {2, 1}
// Output : 33
// Explanation:

	//  1			2
// +
	//	2			1
 // ------------
//		3			3


// N=2, and A[]={1,2}
// M=2, and B[]={2,1}
// Number represented by first array is 12.
// Number represented by second array is 21
// Sum=12+21=33

// Input : A[] = {9, 5, 4, 9}, B[] = {2, 1, 4} 
// Output : 9763 

//  	9			5			4			9
// +
//  				2			1 		4
 // -----------------------
//		9 		7		6			3

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    string ans;
    int carry=0;
    int i=n-1;
    int j =m-1;
    
        while(i >= 0 && j >=0) {
            int x = a[i] + b[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
            j--;
        }
    
        while(i>=0) {
            int x = a[i] + 0 + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
            j--;
        }
        
        while(j>=0) {
            int x = 0 + b[j] + carry;
            int digit = x % 10;
            ans.push_back(digit + '0');
            carry = x / 10;
            i--;
            j--;
            
        }
        
        if(carry) {
            ans.push_back(carry + '0');
        }
        
        while(ans[ans.size() - 1] == '0') {
            ans.pop_back();
        }
        
        // reverse the string to make output seedha
        reverse(ans.begin() , ans.end()); // asa krta reverse string la
        return ans;
    }
};

int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
