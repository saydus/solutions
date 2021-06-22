class Solution {
public:
    bool isAnagram(string s, string t) {
        // hash table approach 
        std::unordered_map<char,int> hash; 
        
        for (auto c : s) {
            hash[c]++;
        }
        
        for (auto c : t) {
            hash[c]--; 
        }
        
        // go through the list, make sure nothing is non-zero: 
        for (auto ele : hash) {
            if (ele.second != 0) {
                return false; 
            }
        }
        
        return true; 
    }
};