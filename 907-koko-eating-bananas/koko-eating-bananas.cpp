class Solution {
public:
    long long howManyHoursToEat(vector<int>& nums, int bananas){
        long long count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%bananas==0){
                count=count+nums[i]/bananas;
            }
            else{
                count=count+nums[i]/bananas + 1;
            }
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high= INT_MIN;
        for(int i=0; i<piles.size(); i++){
            if(piles[i]>high){
                high=piles[i];
            }
        }
        int low=1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours= howManyHoursToEat(piles, mid);
            if(hours<=h){
                ans=mid;
                high=mid-1;
            }
            else if(hours>h){
                low=mid+1;
            }
            // else{
            //     high=mid-1;
            // }
        }
        return ans;
    }
};