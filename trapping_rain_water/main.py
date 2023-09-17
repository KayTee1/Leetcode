class Solution:
    def trap(self, height: list[int]) -> int:
        left, right = 0, len(height) - 1
        leftMax, rightMax = height[left], height[right]
        ans = 0

        while left < right:
            if leftMax < rightMax:
                left += 1
                leftMax = max(leftMax, height[left])
                ans += leftMax - height[left]
            else:
                right -= 1
                rightMax = max(rightMax, height[right])
                ans += rightMax - height[right]

        return ans

height = [0,1,0,2,1,0,1,3,2,1,2,1]
solu=Solution()
print(solu.trap(height))