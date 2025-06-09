class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        while(nums[i]<0 and i<nums.size()-1){
            i++;
        }
        if(nums[i]==0){
            while(i<nums.size()-1){
                if(nums[i+1]!=nums[i]+1){
                    if(nums[i]==nums[i+1]){
                        i++;
                        continue;
                    }
                    return nums[i]+1;
                }
                i++;
            }
            if(i==nums.size()-1){
                return nums[i]+1;
            }
        }
        else if(nums[i]==1){
            while(i<nums.size()-1){
                if(nums[i+1]!=nums[i]+1){
                    if(nums[i]==nums[i+1]){
                        i++;
                        continue;
                    }
                    return nums[i]+1;
                }
                i++;
            }
            if(i==nums.size()-1){
                return nums[i]+1;
            }
        }
        return 1;
    }
};