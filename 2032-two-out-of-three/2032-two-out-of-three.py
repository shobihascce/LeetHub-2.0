class Solution:
    def twoOutOfThree(self, nums1: List[int], nums2: List[int], nums3: List[int]) -> List[int]:
        c=list(set(nums1))+list(set(nums2))+list(set(nums3))
        r=[]
        for i in c:
            if(c.count(i)>=2 and i not in r):
                r.append(i)
        return r
        