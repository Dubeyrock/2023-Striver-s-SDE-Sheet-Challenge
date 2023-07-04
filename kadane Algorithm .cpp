Kadane's Algorithm
Edit

Approach 














class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    // dp[i] := max sum subarray ending w/ i.
    vector<int> dp(nums.size());

    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i)
      dp[i] = max(nums[i], dp[i - 1] + nums[i]);

    return *max_element(begin(dp), end(dp));
  }
};

python code :


class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n = len(nums)
        maxSum = nums[0]
        minSum = sum = 0
        for i in range(n):
            sum += nums[i]
            maxSum = max(maxSum, sum - minSum)
            minSum = min(minSum, sum)
            
        return maxSum
