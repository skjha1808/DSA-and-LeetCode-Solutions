class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int m=nums1.size();
        int n =nums2.size();
        int i=0, j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }

        double median=-1;
        int a=ans.size();
        if(a%2!=0){
            int mid=a/2;
            median=ans[mid];
        }
        else {
            int mid1=(a/2)-1;
            int mid2=a/2;
            median=(ans[mid1]+ans[mid2])/2.0;
        }

        return median;
    }
};