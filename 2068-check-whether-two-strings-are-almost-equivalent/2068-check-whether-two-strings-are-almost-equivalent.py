class Solution(object):
    def checkAlmostEquivalent(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: bool
        """
        for i in word1:
            if(abs(word1.count(i)-word2.count(i))>3):
                return False
        for i in word2:
            if(abs(word1.count(i)-word2.count(i))>3):
                return False
        return True

        