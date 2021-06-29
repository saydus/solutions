class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // reverse each row
        // then invert it
        
        vector<vector<int>> test; 
        
        for (auto x : image) {
            
            vector<int> temp = x; 
            
            // reverse each x: 
            int i = 0; 
            int j = temp.size() - 1; 
            
            while (i <= j) {
                std::swap(temp[i], temp[j]); 
                i++; 
                j--; 
            }
            
            for (int k = 0; k < temp.size(); ++k) {
                if (!temp[k]) {
                    temp[k] = 1; 
                } else {
                    temp[k] = 0; 
                }
            }
            
            test.push_back(temp); 
        }
        
        return test; 
    }
};