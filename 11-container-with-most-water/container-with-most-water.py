class Solution:
    def maxArea(self, height: List[int]) -> int:
        lo, hi = 0, len(height) - 1
        res = 0
        while lo < hi:
            area = min(height[lo], height[hi]) * (hi-lo)
            res = max(res, area)
            if height[lo] < height[hi]:
                lo += 1
            else:
                hi -= 1
        return res