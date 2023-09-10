class Solution:
    def isValid(self, s: str) -> bool:
        opening_parentheses = ['(', '{', '[']
        closing_parentheses = [')', '}', ']']
        left = 0
        right = len(s) - 1
        i,j = 0, 0


        while left < right:
            if s[left] == opening_parentheses[i]:
                if s[right] != closing_parentheses[j]:
                    j -= 1
                else:
                    left += 1
            i += 1

        if left == right:
            return False


solu = Solution()
solu.isValid("()")