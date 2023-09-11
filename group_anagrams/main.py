from collections import defaultdict

class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        anagrams_map = defaultdict(list)
        result = []

        for s in strs:
            sorted_s = tuple(sorted(s))
            anagrams_map[sorted_s].append(s)

        for value in anagrams_map.values():
            result.append(value)

        return result

strs = ["eat","tea","tan","ate","nat","bat"]
solu = Solution()
print(solu.groupAnagrams(strs))