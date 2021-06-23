class Solution {
public:
    int firstUniqChar(string s) {
        // we can use a hash to get a count
        // and then go in order of the string to 
        // see if its the first unique char 
        unordered_map<char,int> hash; 
        
        for (auto c : s) {
            hash[c]++; 
        }
        
        for (int i = 0; i < s.size(); ++i) {
            if (hash[s[i]] == 1) {
                return i; 
            }
        }
        
        return -1; 
    }
};