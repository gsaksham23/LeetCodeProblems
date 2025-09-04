class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        vector<int> ans(2);
        for(int i = 0; i < nums.size(); i++){
            int val = target - nums[i];
            int j = find(nums.begin(), nums.end(), val) - nums.begin();
            if(j == i || j == nums.end() - nums.begin()) continue;
            else return {i,j};
        }
        return ans;
    }
}; 