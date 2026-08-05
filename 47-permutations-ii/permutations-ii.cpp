class Solution {
public:
void backtrack(vector<int>& nums , int index , vector<vector<int>>& ans){

    if(index==nums.size()){
        ans.push_back(nums);
        return ;
    }
   unordered_set<int> visited;
    for(int i = index; i<nums.size(); i++){

  if (visited.count(nums[i])) continue;
            visited.insert(nums[i]);
        swap(nums[index] , nums[i]);

        backtrack(nums , index+1 , ans);

        swap( nums[index] , nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>> ans;

        backtrack(nums , 0 , ans);
        return ans;
        
    }
};