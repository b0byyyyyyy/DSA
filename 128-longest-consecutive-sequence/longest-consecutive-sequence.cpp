class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        

        sort(nums.begin() , nums.end());
         
         if(nums.empty())
         return 0;

        int longeststreak=1;
        int currentstreak = 1;
        
         for(int i=1; i<nums.size(); ++i){
            if(nums[i] == nums[i-1]){
            continue;
            } else if (nums[i] == nums[i - 1] + 1) {
                currentstreak++;
            } else {
                longeststreak = max(longeststreak, currentstreak);
                currentstreak = 1;
            }
         }
         return max(longeststreak , currentstreak);

    }
};