class Solution {
public:

    bool checkPalindrome(string s, int start, int end){
        while(start<end) {
            if(s[start]==s[end]) {
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j) {
            if(s[i]==s[j]) {
                i++;
                j--;
            }
            else{
            // if element i not equals j element in string mg
            // 2 cases banle 
            // i la remove kela string mdhun tr some output
            // j la remeve kela string mdhun tr someother output
            bool ans1 = checkPalindrome(s,i+1,j); // removing i wala charachter from string
            bool ans2 = checkPalindrome(s,i,j-1); // removing j wala char
            return ans1 || ans2; 
            /*
            0 | 0 => 0
            0 | 1 => 1(true)
            1 | 0 => 1(true)
            1 | 1 => 1(true)
            */ 
            }
        }
        // if the given string is already a valid palindrome then return true;
        return true;
    }
};
