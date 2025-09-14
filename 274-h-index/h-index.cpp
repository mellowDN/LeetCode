class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int idx=0;
        while(idx<citations.size() && idx+1<=citations[idx]){
            idx++;
        }
        return idx;
    }
};