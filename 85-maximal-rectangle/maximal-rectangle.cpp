class Solution {
public:
int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;

        for (int i = 0; i <= n; i++) {
            int currentHeight;
            if (i == n) {
                currentHeight = 0;
            } else {
                currentHeight = heights[i];
            }
            
            while (!st.empty() && currentHeight < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                
                int w;
                if (st.empty()) {
                    w = i;
                } else {
                    w = i - st.top() - 1;
                }
                
                maxArea = max(maxArea, h * w);
            }
            st.push(i);
        }

        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans;
        int row= matrix.size();
        int col = matrix[0].size();
        vector<int>heights(col ,0);

        if (matrix.empty() || matrix[0].empty()) 
          return 0;

        for(int i=0; i<row; i++)
        {

            for(int j=0; j<col; j++)
            {
                if(matrix[i][j]=='0')
                heights[j]=0;
                else
                heights[j]++;
            }
        
        ans= max(ans, largestRectangleArea(heights));
        }
    return ans;

        
    }
};