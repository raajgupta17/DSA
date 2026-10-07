class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=0;
        int i = s.size() - 1;
        while(j<i){
            swap(s[i],s[j]);
            j++;
            i--;
        }
        
    }
};