class Solution {
public:
    int bSearch(vector<int>& arr, int target){
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return 0;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return 1;
    }
    int findKthPositive(vector<int>& arr, int k) {
        for(int i=1; i<2001; i++){
            if(bSearch(arr, i)) k--;
            if(k==0) return i;
        }
        return -1;
    }
};