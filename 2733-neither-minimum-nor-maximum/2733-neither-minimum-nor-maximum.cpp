class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        minN = min(nums)
        maxN = max(nums)
        for i in nums:
            if i != minN and i != maxN:
                return i
        return -1