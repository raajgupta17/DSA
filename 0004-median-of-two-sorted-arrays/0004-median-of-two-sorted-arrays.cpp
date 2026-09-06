class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int sum = 0;
        double median;

        nums1.insert(nums1.end(),nums2.begin(),nums2.end());

        int n1 = nums1.size();

        for(int i=0;i<n1-1;i++){
            int mini=i;
            for(int j=i;j<n1;j++){
                if(nums1[j] < nums1[mini]){
                    mini = j;
                }
            }
            swap(nums1[mini],nums1[i]);
        }

        for(int i=0;i<n1;i++){
            sum += nums1[i];
        }

       if(n1 % 2 == 1) {
            return nums1[n1 / 2];
        }
        else {
            return (nums1[(n1 / 2 )- 1] + nums1[n1 / 2]) / 2.0;
        }
    }
};