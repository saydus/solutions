// 557. Reverse Words in a String III
class Solution {
public:
    void reverseString(string& s, int left, int right) {
        int l = left; 
        int r = right;
        
        while (l <= r) {
            // standard procedure for swapping
            std::swap(s[l], s[r]);
            l++; 
            r --; 
        }
    }
    
    string reverseWords(string s) {
        int left = 0; 
        int right = 0; 
        
        while (right < s.size()) {
            if (s[right] == ' ') {
                reverseString(s, left, right - 1);
                left = right + 1;
                right++; 
            } else {
                right++; 
            }
        }
        
        // always has at least one word, handle edge case: 
        reverseString(s, left, right - 1);
        
        return s; 
    }
};