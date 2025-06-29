class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int mask = 0, n = nums.size();
        int first = 0, second = 0;
        for(int i = 0; i < n; ++i) mask ^= nums[i];
        mask &= -static_cast<unsigned int>(mask);
        for(int i = 0; i < n; ++i){
            if(mask & nums[i]) first ^= nums[i];
            else second ^= nums[i];
        }
        return {first , second};
    }
};