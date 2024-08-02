class Solution(object):
    def minimumAverage(self, nums):
        """
        :type nums: List[int]
        :rtype: float
        """
        r=[]
        while(len(nums)>=2):
            r.append((min(nums)+max(nums))/2.0)
            nums.remove(min(nums))
            nums.remove(max(nums))
        return min(r)



        