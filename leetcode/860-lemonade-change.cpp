class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // seems more like a math problem than greedy
        
        int five = 0;
        int ten = 0; 
        int twenty = 0; 
        
        for (auto ele : bills) {
            
            if (ele > 5) {
                // check if we have enough change: 
                
                int changeToGive = ele - 5; 
                
                
                if (changeToGive == 5) {
                    // the customer gives us a 10
                    if (five > 0) {
                        five--;
                        ten++; 
                    } else {
                        return false; 
                    }
                } else if (changeToGive == 15) {
                    // the customer gives us a 20
                    
                    // do we have a 10 and 1 five?
                    // or 3 fives
                    
                    if ((five >= 1 && ten >= 1)) {
                        five--; 
                        ten--; 
                        twenty++; 
                    } else if (five >= 3) {
                        five -= 3; 
                        twenty++; 
                    } else {
                        return false; 
                    }
                }
            
            } else {
                if (ele == 5) {
                    five++;
                } else if (ele == 10) {
                    ten++; 
                } else {
                    
                    twenty++; 
                }
            }
            
            
        }
        return true; 
    }
};