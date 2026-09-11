class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi = nums[0];
        int currentSum = 0;

        for( int i=0; i<nums.size(); i++){
            currentSum = currentSum + nums[i];

          maxi = max(maxi , currentSum);

          if(currentSum <0)
          currentSum =0;
        }
        return maxi;
    }
};