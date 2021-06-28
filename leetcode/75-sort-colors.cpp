class Solution {
public:
    void sortColors(vector<int>& nums) {
        // no std::sort 
        
        // can just count here: 2 pass o(n) since its 
        // just three types of colors
        
        int one(0); 
        int two(0); 
        int three(0); 
        
        for (auto x : nums) {
            if (x == 0) {
                one++; 
            } else if (x == 1) {
                two++;
            } else {
                three++;
            }
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            
            if (one > 0) {
                nums[i] = 0; 
                one--; 
            } else if (two > 0) {
                nums[i] = 1; 
                two--; 
            } else {
                nums[i] = 2; 
                three--; 
            }
            
        }
        
        
    }
};