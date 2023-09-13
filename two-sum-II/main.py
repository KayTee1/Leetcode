class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        hashmap = {}

        for i, num in enumerate(numbers):
            i += 1
            diff = target - num
            if diff in hashmap:
                return [hashmap[diff], i]
            hashmap[num] = i



numbers = [2,7,11,15]
target = 9

solu = Solution()
print(solu.twoSum(numbers, target))