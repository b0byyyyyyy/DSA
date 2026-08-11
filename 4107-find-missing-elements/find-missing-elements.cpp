class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<int> result;
        
       
        for (int i = 1; i < nums.size(); i++) {
            int prev = nums[i - 1];
            int curr = nums[i];
            
           
            for (int missing = prev + 1; missing < curr; missing++) {
                result.push_back(missing);
            }
        }
        
        return result;
    }
};