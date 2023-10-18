class Solution(object):
    def construct2DArray(self, original, m, n):
        """
        :type original: List[int]
        :type m: int
        :type n: int
        :rtype: List[List[int]]
        """
        
        if m*n != len(original):
            return []
        res = []
        for i in range(m):
            curr = []
            for j in range(n):
                curr.append(original[i * n + j])
            res.append(curr)
        return res
        
