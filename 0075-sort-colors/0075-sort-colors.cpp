class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            int mini=i;
            for(int j=i;j<nums.size();j++){
                if(nums[j] < nums[mini]){
                    mini=j;
                }

            }
            swap(nums[mini],nums[i]);
        }
    }
};