class Solution {
public:

    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int> ds, int idx){
        if(idx>=nums.size()){
            sort(ds.begin(), ds.end());
            for(int i=0; i<ans.size(); i++){
                if(ds==ans[i]) return;
            }
            ans.push_back(ds);
            return;
        }

        solve(nums, ans, ds, idx+1);
        ds.push_back(nums[idx]);
        solve(nums, ans, ds, idx+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(nums, ans, ds, 0);
        return ans;
    }
};