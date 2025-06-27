class Solution {
public:
    int hammingDistance(int m, int n){
        return __builtin_popcount(m ^ n); 
    }
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                sum+= hammingDistance(nums[i], nums[j]);
            }
        }
        return sum;
    }
};