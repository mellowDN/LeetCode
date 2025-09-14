class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) count++;
        }
        if(count>1){
            for(int i=0; i<nums.size(); i++){
                ans.push_back(0);
            }
            return ans;
        }
        else if(count==0){
            int prod=1;
            for(int i=0; i<nums.size(); i++){
                prod=prod*nums[i];
            }
            for(int i=0; i<nums.size(); i++){
                ans.push_back(prod/nums[i]);
            }
            return ans;
        }
        int idx=0;
        while(nums[idx]!=0){
            idx++;
        }
        int prod=1;
        for(int i=0; i<nums.size(); i++){
            if(i!=idx) prod=prod*nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            ans.push_back(0);
        }
        ans[idx]=prod;
        return ans;
    }
};