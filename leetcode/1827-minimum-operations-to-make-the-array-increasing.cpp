class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        vector<int> cpy(nums); 
        // greedy idea: start from the second num:
        // and increase it to prev + 1, the dist is the amount of work 
        
        if (nums.size() == 1) {
            return 0; 
        } else {
            int netWork(0); 
            
            for (int i = 1; i < cpy.size(); ++i) {
                
                if (cpy[i] <= cpy[i-1]) {
                    netWork += cpy[i - 1] - cpy[i] + 1;  
                    int distance = cpy[i - 1] - cpy[i]  + 1;
                    cpy[i] += distance;
                }
            
            }            
            return netWork; 
        }
    }
};