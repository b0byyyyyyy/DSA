class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
   sort(nums.begin(), nums.end());
        
        int left = 0;
        long long current_sum = 0;
        int max_freq = 0;
        
        
        for (int right = 0; right < nums.size(); right++) {
            current_sum += nums[right];
            
            int windowsize= right-left+1;
            while ((long long)windowsize * nums[right] - current_sum > k) {
                current_sum -= nums[left];
                left++;

                windowsize--;
            }
            
            
            if (windowsize > max_freq) {
                max_freq = windowsize;
            }
        }
        
        return max_freq;
    }
};