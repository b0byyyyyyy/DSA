class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int n= nums.size();

        sort(nums.begin() , nums.end());

        for(int i=0; i<n-2; ++i){
            //agr phela element duplicate hota hai to skip krege
            if(i > 0 && nums[i] == nums[i - 1]) 
             continue;
        
        // agr mera nums of i zero se chota hota hai to loop se vahar ajyega
        if(nums[i] >0)
        break;

        int left = i+1;
        int right = n-1;

        while(left<right ){
            int sum = nums[i] + nums[left] + nums[right] ;
           // skip krege sum jb mera second or thrid element agr duplicate hua to
            if(sum ==0){
                result.push_back({nums[i] , nums[left] , nums[right]});

                while(left<right && nums[left] == nums[left+1])
                left++;

                while(left<right && nums[right] == nums[right-1])
                right--;

                left++;
              right--;
            }
            

            else if(sum <0){
                left++;

            }
            else{
                right--;
            }

        }
        
        }

    return result;
        }
};