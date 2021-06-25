class Solution {
public:
    char findTheDifference(string s, string t) {
        // hash || sorting, but sorting is more inefficient
        unordered_map<char,int> hash;
        
        for (auto x : s) {
            hash[x]++;
        }
        
        // watch if we add something or if something is left 
        for (auto x : t) {
            hash[x]--; 
        }
        
        for (auto x : hash) {
            if (x.second < 0) {
                return x.first; 
            }
        }
        return 'a'; 
    }
};