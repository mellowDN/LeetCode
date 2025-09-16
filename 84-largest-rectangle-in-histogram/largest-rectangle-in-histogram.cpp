class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        vector<int> right(heights.size());
        for(int i=heights.size()-1; i>=0; i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()) right[i]=heights.size();
            else right[i]=st.top();
            st.push(i);
        }
        while(st.size()) st.pop();

        vector<int>left(heights.size());
        for(int i=0; i<heights.size(); i++){
            while(st.size()>0 && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()) left[i]=-1;
            else left[i]=st.top();
            st.push(i);
        }
        int maxArea=0;
        for(int i=0; i<heights.size(); i++){
            int width= right[i]-left[i]-1;
            int area= heights[i]*width;
            if(area>maxArea) maxArea=area;
        }
        return maxArea;
    }
};