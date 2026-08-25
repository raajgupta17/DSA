class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> prefixSum;

        for(int i=0; i<nums.size();i++){
            sum += nums[i];

            prefixSum.push_back(sum);

        }
        return prefixSum;

        
    }
};