class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int originalNum = x;
        long long reverse = 0;
        long long remainder;
        
        while(x != 0){
            remainder = x % 10;
            reverse = (reverse * 10)+remainder;
            x /= 10;
        }
        return originalNum == reverse;
    }
};