class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:

        nums_set = set()

        if len(nums_set) != len(nums):
            return False
        
        for i in range(len(nums)):
            

nums = [1,2,3,4]

solu = Solution()
print(solu.containsDuplicate(nums))