class Solution(object):
    def numberOfPairs(self, nums1, nums2, k):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type k: int
        :rtype: int
        """
        s=[]
        n=len(nums1)
        m=len(nums2)
        for i in range(n):
            for j in range(m):
                if(nums1[i]%(nums2[j]*k)==0):
                    s.append((i,j))
        return len(s)

        