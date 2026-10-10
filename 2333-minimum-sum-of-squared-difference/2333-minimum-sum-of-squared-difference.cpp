class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();

        vector<int> count(1e5+1, 0);
            for(int i=0;i < n;i++){
                int d = abs(nums1[i] - nums2[i]);
                count[d]++; // frequency of nums of the array; if diff is 5 and number of times 5 appear in diff =. count;
            }
            int k = k1+k2;
            for(int currDiff = 1e5; currDiff > 0 && k>0; currDiff--){
                int countOps = min(count[currDiff], k);

                count[currDiff] -= countOps; //we did currDiff-1;
                count[currDiff - 1] += countOps;
                k -= countOps;
            }
                

        long long result = 0;
        for(long long d = 1; d <= 1e5 ;d++){
            result += (count[d] * d*d);
        }
        return result;

    }
};