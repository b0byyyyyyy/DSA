   class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& combination,
                    vector<vector<int>>& result, int start) {

            if (target == 0) {
            result.push_back(combination);
            return;
        }

           if (target < 0) {
            return;
        }

          for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) 
            continue;
            if (candidates[i] > target) 
              break;

            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], combination, result, i + 1);
            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> combination;

        backtrack(candidates, target, combination, result, 0);
        return result;
    }
};