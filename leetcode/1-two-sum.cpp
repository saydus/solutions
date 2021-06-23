class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash; 
        vector<int> num; 
        for (int i = 0; i < nums.size(); ++i) {
            if (hash.find(target - nums[i]) == hash.end()) {
                hash[nums[i]] = i; 
            } else {
                
                num.push_back(i);
                num.push_back(hash[target - nums[i]]);
                
                return num; 
            }
        }
        return num; 
    }
};