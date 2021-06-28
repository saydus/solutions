class Solution {
public:
    int tribonacci(int n) {
        vector<int> memo(n); 
        
        if (n == 0) {
            return 0; 
        } else if (n == 1) {
            return 1; 
        } else if (n == 2) {
            return 1; 
        } else {
            memo[0] = 0; 
            memo[1] = 1; 
            memo[2] = 1; 
            
            for (int i = 3; i < n; ++i) {
                memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
            }
            
            return memo[n - 1] + memo[n - 2] + memo[n - 3];
        }
        return -1; 
    }
};