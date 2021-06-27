#include <stdio.h>      /* printf */
#include <math.h>       /* floor */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // non constant space. 
        unordered_map<int, int> hash; 
        
        for (auto x : nums) {
            hash[x]++; 
        }
        
        for (auto x : hash) {
            if (x.second > floor(nums.size()/2)) {
                return x.first; 
            }
        }
        
        return -1; 
    }
};