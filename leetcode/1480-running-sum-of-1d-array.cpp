class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum(nums.size()); 
        
        int accum(0); 
        
        for (int i = 0; i < nums.size(); ++i) {
            accum += nums[i]; 
            sum[i] = accum; 
        }
        
        return sum; 
    }
};