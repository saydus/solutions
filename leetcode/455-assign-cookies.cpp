class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        // not really sure if its in sorted order: 
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        
        // linear, one-pass solution;
        int i = 0; 
        int j = 0; 
        
        int happy(0); 
        
        while(i < g.size() && j < s.size()) {
            if(g[i] <= s[j]) {
                ++happy; 
                ++i; 
                ++j; 
            } else {
                ++j; 
            }
        }
        
        return happy; 
    }
};