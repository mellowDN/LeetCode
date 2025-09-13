class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int> trace, int index){
        if(target==0){
            ans.push_back(trace);
            return;
        }
        else if(target<0 || index>=candidates.size()){
            return;
        }

        solve(candidates,target,ans,trace,index+1);
        trace.push_back(candidates[index]);
        solve(candidates, target-candidates[index], ans, trace, index);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> trace;
        solve(candidates, target, ans, trace, 0);

        return ans;
    }
};