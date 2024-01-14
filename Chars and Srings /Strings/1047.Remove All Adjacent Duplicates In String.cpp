class Solution {
public:
    string removeDuplicates(string s) {
        string ans ="";
        for(int i=0; i<s.length(); i++) {
            if(ans.length()>0 &&s[i]==ans[ans.length()-1]) {
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

// APPROACH 2
class Solution {
public: 
    string removeDuplicates(string s) { 
        string ans =""; 
        int index=0; 
        while(index < s.length()) { 
            if(ans.length() > 0 && ans[ans.length()-1] == s[index]) { 
                ans.pop_back(); 
            } 
            else{ 
                ans.push_back(s[index]); 
            } 
            index++; 
        } 
        return ans; 
    } 
};
