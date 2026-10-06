class Solution {
public:
    int minSwaps(string s) {
        int n = s.length();
        int open = 0;
        int answer = 0;
        

        for(int i=0;i<n;i++){
            if(s[i] == '['){
                open++;
            }
            else{
                open--;
            }

            if(open < 0){
                answer++;
                open = 1;
            }
        }
        return answer;
        
       
    }
};