class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        res, maxFreq = 0, 0
        mp = defaultdict(int)
        head, tail = -1, 0
        while head + 1 < len(s):
            head += 1
            mp[s[head]] += 1
            maxFreq = max(maxFreq, mp[s[head]])
            while head - tail + 1 - maxFreq > k:
                mp[s[tail]] -= 1
                tail += 1
            res = max(res, head - tail + 1)
        return res