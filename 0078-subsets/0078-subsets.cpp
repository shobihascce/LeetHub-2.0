class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer; 
        vector<int> inter;          
        int n = nums.size();        
        fun(nums, answer, n, inter, 0);
        return answer;
    }
    void fun(vector<int>& nums,vector<vector<int>>& answer,int n,vector<int>& inter,int index) {
        answer.push_back(inter);
        for (int i = index; i < n; i++) {
            inter.push_back(nums[i]);
            fun(nums, answer, n, inter, i + 1);
            inter.pop_back();
        }
    }
};