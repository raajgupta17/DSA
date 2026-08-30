class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIndex=0;
        int maxIndex=0;

        for(int i=0;i<n;i++){
            if(nums[i] < nums[minIndex]){
                minIndex = i;
            }
            if(nums[i] > nums[maxIndex]){
                maxIndex = i;
            }
        }
        int left = min(maxIndex,minIndex);
        int right = max(maxIndex,minIndex);

        int front = right + 1;
        int back = n - left;
        int both = (n-right) + (left+1);

        return min({front,back,both});
    }
    
    
};