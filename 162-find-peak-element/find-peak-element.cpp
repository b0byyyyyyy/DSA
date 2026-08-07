class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.empty()) return -1; 

        return search(nums , 0 , nums.size()-1);
        
    }

    private:

    int search(vector<int>& nums , int low , int high ){

        if(low==high){
            return low;
        }

        int mid = low + (high -low)/2;

        if(nums[mid] > nums[mid+1]){
            return search( nums ,  low , mid );
        }

        else{
            return search ( nums , mid+1 , high);
        }
    }
};