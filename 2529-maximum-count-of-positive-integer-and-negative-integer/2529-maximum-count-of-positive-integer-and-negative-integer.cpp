class Solution {
public:
    int maximumCount(vector<int>& nums) {
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        int n=nums.size();
        int p=0,q=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=0)
                break;
            q++;
        }
        cout<<q<<" "<<n-q;
        return max(q,n-q);

        
    }
};