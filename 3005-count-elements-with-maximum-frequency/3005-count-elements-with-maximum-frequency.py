class Solution(object):
    def maxFrequencyElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        c=[]
        a=[]
        for i in nums:
            if i not in a:
                c.append(nums.count(i))
                a.append(i)
        n=c.count(max(c))
        return n*max(c)
        
        
        