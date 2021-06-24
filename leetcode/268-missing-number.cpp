class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // gauss formula for sums: 
        int sum = (nums.size())*(nums.size() + 1)/2;
        // sum of the array: 
        int sumArray(0); 
        
        for (auto x : nums) {
            sumArray += x; 
        }
        
        return sum - sumArray;
    }
};