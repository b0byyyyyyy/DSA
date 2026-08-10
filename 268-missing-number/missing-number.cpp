class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums.size() - 1;

         while (low <= high) {
             if (nums[low] == low) {
                low++;
            } 
            else if (nums[high] == high + 1) {
                high--;
               }
   }

         return low;
    }
};