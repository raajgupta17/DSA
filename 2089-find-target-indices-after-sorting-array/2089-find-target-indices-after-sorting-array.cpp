class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int>v;
        for(int i=0;i<n-1;i++){
            int mini=i;
            for(int j=i;j<n;j++){
                if(nums[mini] > nums[j]){
                    mini=j;
                }
                
            }
            swap(nums[mini],nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]== target){
                
                v.push_back(i);
            }
        }
        return v;
    }
    
};