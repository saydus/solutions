class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // similar to the previous problem, we would like 
        // to understand the various ways you can reach the ith
        // step and then see the min cost associated with it 
        int n = cost.size(); 
        vector<int> steps(cost);
        
        if (n == 1) {
            return cost[0]; 
        } else if (n == 2) {
            return std::min(cost[0], cost[1]); 
        }
    
        
        for (int i = 2; i < cost.size(); ++i) {
            steps[i] += std::min(steps[i - 1],steps[i - 2]);
        }
        
        // min of the last two
        return std::min(steps[n - 1], steps[n - 2]);
    }
};