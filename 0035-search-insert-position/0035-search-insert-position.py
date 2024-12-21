class Solution:
    def searchInsert(self, nums: List[int], x: int) -> int:
        if(x in nums):
            return nums.index(x)
        if(nums[0]>x):
            return 0
        if(nums[-1]<x):
            return len(nums)
        for i in range(len(nums)-1):
            if(nums[i]<x and nums[i+1]>x):
                return i+1

