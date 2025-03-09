class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak_index=0;
        for(int i=1;i<nums.size();i++){
            if(nums[peak_index]<nums[i]){
                peak_index=i;
            }
        }
        return peak_index;
    }
};
