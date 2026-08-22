class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int mul = 1;
        int temp = n;
        
        while(temp){
            sum += temp % 10;
            mul *= temp % 10;
            temp /= 10;
        }
        return (n % (sum+mul)) == 0;
    }
};