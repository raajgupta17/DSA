class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        // set <int> st;
        // for(int i=0;i<n;i++){
        //     st.insert(nums[i]);
        // }
        // int i=0;
        // for(auto it : st){
        //     nums[i] = it;
        //     i++;
        // } 
        // return st.size();
       
        //Two Pointer Approach

        int i=0;

        for(int j=1;j<n;j++){
            if(nums[j] != nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;

    }

};