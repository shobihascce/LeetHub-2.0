class Solution:
    def rob(self, nums: List[int]) -> int:
        e=0
        n=len(nums)
        for i in range(0,n,2):
            e+=nums[i]
        o=0
        for i in range(1,n,2):
            o+=nums[i]
        print(o,e)
        return max(o,e)
