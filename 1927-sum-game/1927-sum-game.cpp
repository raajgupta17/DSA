class Solution {
public:
    bool sumGame(string num) {
        int sum1=0;
        int sum2=0;
        int n = num.size();
        int q1=0;
        int q2=0;

        for(int i=0;i<n/2;i++){

            if(num[i]=='?'){
                q1++;
            }else{
                sum1 += num[i] - '0';
            }
        }

        for(int i=n/2;i<n;i++){

            if(num[i]=='?'){
                q2++;
            }else{
                sum2 += num[i] - '0';
            }
        }
        if((q1+q2) % 2 !=0){
            return true; // Alice will get extra chance to change the total sum so Alice can change

        }
        int diff = sum1 - sum2;
        
        return diff != 9 * (q2-q1) >>1;
        
    }
};