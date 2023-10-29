class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        l, r = 0, 1
        max_profit = 0

        while r < len(prices):
            if prices[r] < prices[l]:
                l = r
            else:
                currProfit = prices[r] - prices[l]
                max_profit = max(max_profit, currProfit)
            r += 1

        return max_profit


prices = [7, 1, 5, 3, 6, 4]
solu = Solution()
print(solu.maxProfit(prices))
