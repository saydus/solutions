class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         // non constant space. 
        unordered_map<int, int> hash; 
        vector<int> answer; 
        
        for (auto x : nums) {
            hash[x]++; 
        }
        
        for (auto x : hash) {
            if (x.second > floor(nums.size()/3)) {
                answer.push_back(x.first); 
            }
        }
        
        return answer;  
    }
};




// #include <stdio.h>      /* printf */
// #include <math.h>       /* floor */

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
       
//     }
// };