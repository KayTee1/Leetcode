class Solution(object):
    def permute(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        results = []
        visited = set()

        def backtrack(currentPath):
            if (len(currentPath) == len(nums)):
                results.append(currentPath)
            
            for index in range(len(nums)):
                if index not in visited:
                    visited.add(index)
                    backtrack(currentPath + [nums[index]])
                    visited.remove(index)
            
        backtrack([])
        return results
        