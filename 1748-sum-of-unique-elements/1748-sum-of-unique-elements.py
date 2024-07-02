class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        c=[]
        for i in nums:
            if (nums.count(i)==1 and i not in c):
                c.append(i)
        s=0
        for i in c:
            s+=i
        return s

        