class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // compare pairwise
        
        if (strs.size() == 1) {
            return strs[0]; 
        }
        string smallestPrefix = ""; 
        
        int counter = 1; 
        
        for (int i = 1; i < strs.size(); ++i) {
        
            string s1 = strs[i]; 
            string s2 = strs[i - 1]; 
            
            string prefix = ""; 
            
            int l = 0; 
            int j = 0; 
            
            while (l < s1.size() && j < s2.size()) {
                
                if(s1[l] == s2[j]) {
                    prefix += s1[l]; 
                    ++l; 
                    ++j; 
                } else {
                    break; 
                }
            }
            
            if (counter == 1) {
                smallestPrefix = prefix; 
            } else {
                 if (prefix.size() < smallestPrefix.size()) {
                     smallestPrefix = prefix; 
                 }
            }
            counter++; 
        }
        
        return smallestPrefix; 
    }
};