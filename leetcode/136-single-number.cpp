class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash; 
        
        for (auto x : nums) {
            hash[x]++; 
        }
        
        for (auto x : hash) {
            if (x.second ==  1) {
                return x.first; 
            } 
        }
        
        return -1; 
    }
};