class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < arr.size(); i++) {
            int target = 2 * arr[i];
            int low = 0, high = arr.size() - 1;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == target && mid != i) {
                    return true;
                }
                if (arr[mid] < target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};