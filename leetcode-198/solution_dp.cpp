class Solution {
	public:
		int rob(vector<int>& nums) {
			int size = nums.size();

			if (size == 0)
				return 0;
			else if (size == 1)
				return nums[size - 1];

			vector<int> dp(size);

			dp[0] = nums[0];
			dp[1] = max(nums[0], nums[1]);

			for (int i = 2; i < nums.size(); i++)
			{
				dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
			}

			return dp[size - 1];
		}
};
