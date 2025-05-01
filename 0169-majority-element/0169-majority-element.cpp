class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int i=0;
        // sort(nums.begin(),nums.end());
        // while(i<n-1){
        //     int c=1;
        //     while(i+1<n && nums[i]==nums[i+1]){
        //         c++;
        //         i++;
        //     }
        //     if(c>(n/2)){
        //         return nums[i];
        //     }
        //     i++;
        // } 
        // return 1;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};