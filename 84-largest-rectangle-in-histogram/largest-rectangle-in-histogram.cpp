class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> Right(n);
        vector<int> left(n);

        // sbse phele next smallest right find krege
        for(int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] > heights[i]) { 
                Right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        // stack ko empty kro
        while(!st.empty()) {
            Right[st.top()] = n;
            st.pop();
        }

        // next smallest left ke liye
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && heights[st.top()] > heights[i]) {
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty()) { 
            left[st.top()] = -1;
            st.pop();
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans = max(ans, heights[i] * (Right[i] - left[i] - 1));
        }
        return ans;
    }
};