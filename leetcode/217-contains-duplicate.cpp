class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // simple hash idea
        unordered_map<int,int> hash; 
        
        for (auto x : nums) {
            hash[x]++; 
            if (hash[x] > 1) {
                return true; 
            }
        }
        
        return false; 
    }
};