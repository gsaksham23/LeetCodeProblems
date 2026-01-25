class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
          
        left = 0
        target = Counter(s1)
        right = len(s1)-1

        while right < len(s2):
            window = Counter(s2[left:right+1])
            if window == target:
                return True 
            right += 1
            left += 1
        return False

# __import__("atexit").register(lambda: open("display_runtime.txt", "w").write("0")) 