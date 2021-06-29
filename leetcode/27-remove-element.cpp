class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // a two pointer approach where we take it from 
        // either end. 
    
        int i = 0; 
        int j = nums.size() -1; 
        
        while (j > i) {
            if (nums[i] == val && nums[j] != val) {
                std::swap(nums[i], nums[j]);
                i++; 
                j--; 
            } else if (nums[i] != val && nums[j] != val) {
                i++; 
            } else if (nums[i] != val && nums[j] == val) {
                j--; 
            } else if (nums[i] == val && nums[j] == val) {
                j--; 
            }
        }
        
        int k(0); 
        
        for (; k < nums.size(); ++k) {
            if (nums[k] == val) {
                break; 
            }
        }
        
        return k; 
    }
};