class Solution {
public:
    string removeOccurrences(string s, string part) {
       int pos = s.find(part);
        // pos == npos =>  substring does not exist in original string
        // pos != npos => substring exist
       while(pos != string::npos) {
           s.erase(pos, part.size());
           pos=s.find(part);
       }
       return s;
    }
};
