class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int max=INT_MIN;
        for (auto x:m){
            if(x.second>max){
                max=x.second;
            }
        }
        int y=0;
        for(auto x:m){
            if(x.second==max){
                y+=max;
            }
        }
        return y;
    }
};