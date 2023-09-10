class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        haystack_len = len(haystack)
        needle_len = len(needle)

        if needle_len == 0:
            return 0

        if haystack_len < needle_len:
            return -1

        for left in range(haystack_len - needle_len + 1):
            right = 0
            while right < needle_len:
                if haystack[left + right] != needle[right]:
                    break
                right += 1

            if right == needle_len:
                return left

        return -1

solu = Solution()
print(solu.strStr("hello", "ll"))
