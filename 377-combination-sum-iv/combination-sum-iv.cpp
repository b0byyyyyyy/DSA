class Solution {
public:
    unordered_map<int, int> memo;

    int backtrack(vector<int>& nums, int target) {

        if (target == 0) {
            return 1;   
        }

        if (target < 0) {
            return 0;   
        }

        if (memo.find(target) != memo.end()) {
            return memo[target];
        }

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count += backtrack(nums, target - nums[i]);
        }

        memo[target] = count;
        return count;
    }

    int combinationSum4(vector<int>& nums, int target) {
        memo.clear();
        return backtrack(nums, target);
    }
};