class Solution {
public:
    int lowerBound(vector<int> nums, int target){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(ans<nums.size() && nums[ans]==target){
            return ans;
        }
        return -1;
    }
    int upperBound(vector<int> nums, int target){
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans-1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> indices;
        indices.push_back(lowerBound(nums, target));
        if(indices[0]==-1){
            return {-1, -1};
        }
        indices.push_back(upperBound(nums, target));
        return indices;
    }
};