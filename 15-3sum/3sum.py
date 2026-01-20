class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        for i, a in enumerate(nums):
            if a > 0:
                break
            if i > 0 and a == nums[i-1]:
                continue
            lo, hi = i+1, len(nums) - 1
            while lo < hi:
                val = a + nums[lo] + nums[hi]
                if val == 0:
                    res.append([a, nums[lo], nums[hi]])
                    lo += 1
                    hi -= 1
                    while nums[lo] == nums[lo-1] and lo < hi:
                        lo += 1
                elif val > 0:
                    hi -= 1
                else:
                    lo += 1
        return res
