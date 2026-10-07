class Solution:
    def minSubArrayLen(self, target, nums):
        low = 0
        high = 0
        res = float('inf')
        total = 0
        n = len(nums)

        while high < n:
            total += nums[high]

            while total >= target:
                length = high - low + 1
                res = min(res, length)

                total -= nums[low]
                low += 1

            high += 1

        if res == float('inf'):
            return 0
        else:
            return res