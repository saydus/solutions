class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n = nums.size()/2; 
        unordered_map<int, int> hash; 
        
        for (auto x : nums) {
            hash[x]++;
            if (hash[x] == n) {
                return x; 
            }
        }
        
        return -1; 
    }
};