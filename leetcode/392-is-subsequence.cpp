class Solution {
public:
    bool isSubsequence(string s, string t) {
        // i think a two pointer approach would suffice here, not really sure about DP
        // make it could be seen as if i find the first one, you find the rest in the 
        // remainder of the string 
        
        int i = 0; 
        int j = 0; 
        
        if (s.size() > t.size()) {
            return false; 
        } else {
            while (i < s.size() && j < t.size()) {
                if (s[i] == t[j]) {
                    i++; 
                    j++; 
                } else {
                    j++; 
                }
                
            }
        }
        
        if (i >= s.size()) {
            return true; 
        }
        
        return false; 
    }
};