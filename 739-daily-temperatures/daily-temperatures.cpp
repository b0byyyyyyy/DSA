class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     int days= temperatures.size();

        stack<int> st;
        vector<int> ans(days,0);

        for(int i=days-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top()-i;
            }
            else ans[i]=0;
            st.push(i);
        }
        return ans;
    }
};