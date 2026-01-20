class Solution:
    def twoSum(self, num: List[int], target: int) -> List[int]:
        lo, hi = 0, len(num)-1
        while lo < hi:
            val = num[lo] + num[hi]
            if val == target:
                return [lo+1, hi+1]
            elif val < target:
                lo += 1
            else:
                hi -= 1
        return []