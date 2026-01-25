class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, ans = 0;
        map<char, int> mp;
        for(int right = 0; right < s.size(); right++){
            if(mp[s[right]] != 0){
                left = max(left, mp[s[right]]);
            }
            mp[s[right]] = right + 1;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};