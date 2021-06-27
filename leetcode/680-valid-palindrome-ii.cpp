class Solution {
public:
    
    bool pal(int i, int j, string s) {
        while ( i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            ++i;
            --j; 
        }
        return true; 
    }
    bool validPalindrome(string s) {
        
        int counter(0); 
        
        // we kind of ignore the discrep. and move on;
        int i = 0; 
        int j = s.size() - 1; 

        // std::cout << isalnum(' ');

        while (i <= j) {
            // if (isalnum(s[i]) && isalnum(s[j])) {

                if (tolower(s[i]) == tolower(s[j])) {
                    ++i; 
                    --j;
                } else {
                    return pal(i, j - 1, s) || pal(i + 1, j, s);
                }

            // } 
            
        }
    
        return true; 
        
    }
};