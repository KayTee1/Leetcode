class Solution:
    def search(self, nums: list[int], target: int) -> int:

        left, right = 0, len(nums)
        mid = (left + right)//2

        while left < right:
            current = nums[mid]
            if current == target:
                return mid
            elif current < target:
                left = mid
                mid = (left + right)//2
                if left == mid:
                    left += 1
            else:
                right = mid
                mid = (left + right)//2
                if right == mid:
                    right -= 1

        return -1

nums = [-1,0,3,5,9,12]
target = 9

solu = Solution()
print(solu.search(nums, target))