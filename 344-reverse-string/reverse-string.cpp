class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            st.push(s[i]);
        }
        int i=0;
        //vector<char> s1;
        while(st.empty()==0){
            s[i]= st.top();
            st.pop();
            i++;
        }
        /*if(s1==s){
            return true;
        }
        return false;*/
    }
};