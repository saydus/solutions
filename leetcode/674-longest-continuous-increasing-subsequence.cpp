class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        if (nums.size() == 1) {
            return nums[0];
        }

        int max = -1; 
        
        // two pointer approach but not sliding window 
        int i = 0; 
        int j = 1; 
        
        while (j < nums.size()) {
            if (nums[j] > nums[j - 1]) {
                ++j;
            } else {
                // restart 
                int dist = j - i; 
                
                if (dist > max) {
                    max = dist;
                }
                
                i = j; 
                j++; 
            }
        }
        
        // edge case we're at the end and j went pass the end but we're 
        // still exploring a sequence 
        int lastDist = j - i; 
        if (lastDist > max) {
            max = lastDist; 
        }
        
        return max; 
    }
};