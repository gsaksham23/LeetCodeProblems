class Solution {
public:
    int trap(vector<int>& height) {
        // Fast I/O
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        // Code
        int ans = 0, n = height.size();
        if(n == 0) return 0;
        int left = 0, right = n-1;
        int leftMax = height[left], rightMax = height[right];
        while(left < right){
            if(leftMax < rightMax){
                left++;
                leftMax = max(leftMax, height[left]);
                ans += leftMax - height[left];
            }
            else{
                right--;
                rightMax = max(rightMax, height[right]);
                ans += rightMax - height[right];
            }
        }
        return ans;
    }
};