class Solution {
public:
    int getMaximumGenerated(int n) {
        // generate the thing O(N)
        // find the max O(N)
        
        if (n == 0) {
            return 0; 
        }
        
        vector<int> memo(n + 1); 
        
        memo[0] = 0; 
        memo[1] = 1; 
        
  
        
        for (int i = 1; i < memo.size()/2; ++i) {
        
            memo[i * 2] = memo[i];
            memo[i * 2  + 1] = memo[i] + memo[i + 1];
        }
        
        int max(-1); 
        
        for (auto x : memo) {
            if (x > max) {
                max = x; 
            }
        }
        
        return max; 
    }
};