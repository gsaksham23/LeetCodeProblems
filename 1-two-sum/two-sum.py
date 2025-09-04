class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = []
        for i, val in enumerate(nums):
            x = target - val
            if x in nums:
                if nums.index(x) == i:
                    continue
                ans.append(i)
                ans.append(nums.index(x))
                return ans
        return ans