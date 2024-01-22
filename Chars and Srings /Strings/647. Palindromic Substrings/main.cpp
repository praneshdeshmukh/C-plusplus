class Solution {
public:
    int expand(string s, int i, int j) {
        int count=0;
        // check if i does not become -ve
        // check if j does be out of bound
        // if element i =matches= j element
        // increse count
        // i-- and j++ <= go from inwards to outwards
        // mdhun baher jatoye apan
        // usually in 2 pointer approach we go outward to inwards [both i,j towards center element] but here the case is exact opposite we go from center to first and last element
        // NOTE - every element here is a center element indexs: 0,1,2,3,4,... all are centers in their respective iteration
        while(i>=0 && j<=s.length() && s[i]==s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalAns=0;
        // assume center = i and j pointers 
        for(int center=0; center<s.length(); center++){
            int oddKaAns= expand(s,center,center);
            // odd pe i=j= points same element
            int evenKaAns= expand(s,center,center+1);
            // even pe 
            // i=current element
            // j=current element+1
            totalAns = totalAns + oddKaAns + evenKaAns;
        }
        return totalAns;
    }
};
