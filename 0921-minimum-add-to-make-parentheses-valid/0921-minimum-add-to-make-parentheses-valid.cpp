class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int ans = 0;
        int n = s.length();

        for(int i=0;i<n;i++){
            if(s[i] == '(' ){
                count++;
            }
            else{
                if(count > 0){
                    count--;
                }
                else{
                    ans++;
                }
            }
        }
        
       return ans+count;
    }
};