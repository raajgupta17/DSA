class Solution {
public:
    int reverse(int x) {
        long long reverse = 0;
        long long remainder;
        while(x != 0){
            remainder = x % 10;
            reverse = (reverse * 10) + remainder;
            x /= 10;
        }
        if(reverse > 2147483647 || reverse < -2147483648LL) {
        return 0;
        }
        return reverse;
    }
};