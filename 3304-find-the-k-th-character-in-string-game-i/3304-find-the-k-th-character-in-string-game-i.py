class Solution:
    def kthCharacter(self, k: int) -> str:
        s="a"
        while(len(s)<=k):
            for i in s:
                s+=chr(ord(i)+1)
        return s[k-1]

