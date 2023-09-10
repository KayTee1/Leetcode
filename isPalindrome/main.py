import re

class Solution:
    def isPalindrome(self, s: str) -> bool:
        lowercase_string = s.lower()
        alphanumeric_string = re.sub(r'[^a-zA-Z0-9]', '', lowercase_string)

        left = 0
        right = len(alphanumeric_string) - 1

        while left < right:
            if alphanumeric_string[left] != alphanumeric_string[right]:
                return False
            left += 1
            right -= 1
        return True

solu = Solution()
print(solu.isPalindrome("A man, a plan, a canal: Panama"))