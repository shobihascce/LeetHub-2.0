class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n=len(nums)
        s=0
        for i in range(1,n+1):
            if(nums.count(i)==2):
                s=i
        for i in range(1,n+1):
            if i not in nums:
                return [s,i]

