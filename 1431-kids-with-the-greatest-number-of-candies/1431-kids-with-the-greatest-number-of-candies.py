class Solution:
    def kidsWithCandies(self, c: List[int], e: int) -> List[bool]:
        m = max(c)
        r = []
        for i in c:
            if m <= i + e:
                r.append(True)
            else:
                r.append(False)
        return r
