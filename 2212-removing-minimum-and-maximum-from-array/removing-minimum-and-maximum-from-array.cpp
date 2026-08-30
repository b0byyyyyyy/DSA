class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
           int n = nums.size();
             vector<pair<int, int>> arr(n);
    
          for (int i = 0; i < n; ++i) {
              arr[i] = {nums[i], i};
        }
        
        
        sort(arr.begin(), arr.end());
        
            int left = 0;
           int right = n - 1;
        
          int minIdx = arr[left].second;
          int maxIdx = arr[right].second;
        
       
        if (minIdx > maxIdx) {
            swap(minIdx, maxIdx);
        }
        
        
        int deleteFromFront = maxIdx + 1;
        int deleteFromBack = n - minIdx;
        int deleteBothEnds = (minIdx + 1) + (n - maxIdx);
        
        return min({deleteFromFront, deleteFromBack, deleteBothEnds});
    }
};