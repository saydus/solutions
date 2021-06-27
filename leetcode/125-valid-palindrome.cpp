#include <stdio.h>
#include <ctype.h>

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0; 
        int j = s.size() - 1; 
        
        // std::cout << isalnum(' ');
        
        while (i <= j) {
            if (isalnum(s[i]) && isalnum(s[j])) {
                
                if (tolower(s[i]) == tolower(s[j])) {
                    ++i; 
                    --j;
                } else {
                    return false; 
                }
                
 
            } else if (!isalnum(s[i])) {
                ++i;
            } else if (!isalnum(s[j])) {
                --j;
            }
        }
        
        return true; 
    }
};


// int main ()
// {
//   int i;
//   char str[]="c3po...";
//   i=0;
//   while (isalnum(str[i])) i++;
//   printf ("The first %d characters are alphanumeric.\n",i);
//   return 0;
// }