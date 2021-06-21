// 541. Reverse String II
class Solution {
public:
    void reverseString(string& s, int leftIndex, int rightIndex) {
        int l = leftIndex; 
        int r = rightIndex; 
        
        while (l <= r) {
            // standard procedure for swapping
            std::swap(s[l], s[r]);
            l++; 
            r --; 
        }
    }
    
    string reverseStr(string s, int k) {
        int toggle = 0;
        for (int i = 0; i < s.size(); i += k) {
            
            int lowerBound = i; 
            int upperBound = i + k - 1;
            
            if (toggle % 2 == 0 && upperBound >= s.size()) {
                // reverse the entire thing; we're done
                upperBound = s.size() - 1; 
                reverseString(s, lowerBound, upperBound);
            } else if (toggle % 2 == 0) {
                reverseString(s, lowerBound, upperBound);
            } 
            toggle++; 
        }
        
        return s; 
    }
};