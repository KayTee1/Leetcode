class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        string_x = str(x)

        left = 0
        right = len(string_x) - 1

        while left < right:
            if string_x[left] != string_x[right]:
                return False
            left += 1
            right -= 1

        return True

solu = Solution()
print(solu.isPalindrome(121))