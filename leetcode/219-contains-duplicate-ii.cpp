// My initial bad solution: 
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // a bit of a less brute force soln; but still kinda bad (n*k) where k is freq
        // and can approach n worst case
        
        // indices are going to be unique
        
        unordered_map<int, vector<int>> hash;
        
        for (int i = 0; i < nums.size(); ++i) {
            hash[nums[i]].push_back(i);
        }
        
        // now we have a hash with sets 
        
        for (int i = 0; i < nums.size(); ++i) {
            
            vector<int> temp; 
            temp = hash[nums[i]];
            
            if (temp.size() > 1) {
                for (int j = 0; j < temp.size(); ++j) {
                    if (abs(i - temp[j]) <=k && abs(i - temp[j]) > 0) {
                        return true; 
                    }
                }
            }
        }
        
        return false; 
    }
};

// O(N)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // i doubt this is better than BF. 
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            if (hash.find(nums[i]) != hash.end()) {
                if (abs(i - hash[nums[i]]) <= k) {
                    return true; 
                }  
            }
            hash[nums[i]] = i;  
        }
        return false; 
    }
};