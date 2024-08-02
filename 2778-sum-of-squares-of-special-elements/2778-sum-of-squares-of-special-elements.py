class Solution(object):
    def sumOfSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s=0
        n=len(nums)
        for i in range(0,n+1):
            if(n%(i+1)==0):
                s+=(nums[i]**2)
        return s
        