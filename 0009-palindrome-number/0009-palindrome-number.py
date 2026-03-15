class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
           return False
        y = str(x) 
        y = y[::-1]
        y = int(y)
        if x == y:
            return True
        return False
