class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int n = numbers.size();
        int lo = 0, hi = n - 1;
        while(lo < hi){
            int val = numbers[lo] + numbers[hi];
            if (val == target){
                return {lo + 1, hi + 1};
            }
            else if (val > target){hi--;}
            else lo++;
        }
        return {};
    }
};