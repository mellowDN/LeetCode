class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int l=m+n;
        int mid;
        int median;
        if(l%2) mid=(l/2)+1;
        else mid= l/2;
        int i=0, j=0;
        int count=0;
        while(count<mid && i<m && j<n){
            if(nums1[i]<=nums2[j]){
                count++;
                median=nums1[i];
                i++;
            }
            else {
                count++;
                median=nums2[j];
                j++;
            }
        }
        while(i<m && count<mid){
            median=nums1[i];
            i++;
            count++;
        }
        while(j<n && count<mid){
            median=nums2[j];
            j++;
            count++;
        }
        if(l%2) return median;
        
        int median2=median;
        if(i<m && j<n){
            median2=min(nums1[i],nums2[j]);
        }
        else if(i<m) median2=nums1[i];
        else median2=nums2[j];
        return 1.0*(median+median2)/2;
    }
};