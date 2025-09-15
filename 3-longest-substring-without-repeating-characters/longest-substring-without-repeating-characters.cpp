class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1) return 1;
        int maxLen=0;
        for(int i=0; i<s.length(); i++){
            unordered_map<char, int> mp;
            for(int j=i; j<s.length(); j++){
                //if(j==s.length()-1 && mp.count(s[j])==0) return j-i;
                if(mp.count(s[j])){
                    break;
                }
                if(maxLen<(j-i+1)) maxLen=j-i+1;
                mp[s[j]]++;
            }
        }
        return maxLen;
    }
};