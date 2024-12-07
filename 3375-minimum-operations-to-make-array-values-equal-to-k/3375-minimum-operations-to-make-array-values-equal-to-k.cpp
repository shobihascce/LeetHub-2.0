class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        for (int num : nums) {
            if (num < k) return -1;
        }
        sort(nums.rbegin(), nums.rend());
        
        int operations = 0;
        int currentMax = nums[0];
        
        while (currentMax > k) {
            
            int nextMax = k;
            for (int num : nums) {
                if (num < currentMax) {
                    nextMax = num;
                    break;
                }
            }
            
            
            for (int& num : nums) {
                if (num > nextMax) {
                    num = nextMax;
                }
            }
            
            
            operations++;
            currentMax = nextMax;
        }
        
        return operations;
    }
};