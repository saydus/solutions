// 344. Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0; 
        int r = s.size() - 1;
        
        while (l <= r) {
            // standard procedure for swapping
            std::swap(s[l], s[r]);
            l++; 
            r --; 
        }
    }
};