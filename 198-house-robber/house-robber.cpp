class Solution {
public:
    int rob(vector<int>& nums) {
        int prevmax =0;
        int currmax=0;

        for(int num:nums){
            int newmax =max(currmax, prevmax + num);
            prevmax = currmax;
            currmax = newmax;
        }

        return currmax;
    }
};