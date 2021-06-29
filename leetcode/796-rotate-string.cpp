class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s == goal) {
            return true; 
        } else if (s.size() != goal.size()) {
            return false; 
        } else {
            string temp = s; 
            
            for (int i = 0; i < s.size() - 1; ++i) {
                // basically just shift until we know that 
                // they are equal, we don;t want to cycle.
                temp = temp.substr(1, temp.size()) + temp[0]; 
                
                if (temp == goal) {
                    return true; 
                } 
            }
        }
        
        return false; 
    }
};