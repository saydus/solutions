#include <algorithm>    // std::sort

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        // N2*LOG(N)
        if (strs.size() == 0) {
            vector<string> temp; 
            temp.push_back(""); 
            
            answer.push_back(temp);
            
            return answer; 
        } else if (strs.size() == 1) {
            
            // vector<string> temp()
            // return answer; 
            answer.push_back(strs); 
            return answer; 
        } else {
            vector<vector<string>> answer; 
            std::unordered_map<string, vector<string>> hash; 
            for (auto ele : strs) {
                string temp = ele; 
                std::sort(temp.begin(), temp.end()); 
                std::cout << temp << std::endl;
                hash[temp].push_back(ele);
                // std::cout << 1; 
            }
            // going through the hash
            for (auto ele : hash) {
                // std::cout << ele.second; 
                answer.push_back(ele.second); 
                std::cout << answer.size(); 
            }
            return answer; 
        }
        return answer; 
    }
};