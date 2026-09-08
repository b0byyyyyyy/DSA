class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int ,int> freq;

        for(int i=0; i<n; i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>2) return false;
        }
        return true;
    }
};