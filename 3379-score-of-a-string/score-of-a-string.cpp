class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0; i<s.length()-1; i++){
            int temp= abs(s[i]-s[i+1]);
            sum+=temp;
        }
        return sum;
    }
};