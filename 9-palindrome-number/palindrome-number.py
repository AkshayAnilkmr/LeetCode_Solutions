class Solution:
    def isPalindrome(self, x: int) -> bool:
        new=0
        temp=x
        while x>0:
            num=x%10
            new=new*10+num
            x//=10
        if new==temp:
            return True
        else:
            return False

        