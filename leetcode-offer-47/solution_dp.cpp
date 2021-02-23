// 利用动态规划的方法计算出每一个位置所获得的最大礼物值
// 每个位置获得的最大礼物值等于当前位置礼物值加上上方和
// 左侧两个位置中的最大一个。
class Solution {
public:
	int maxValue(vector<vector<int>>& grid) {
		if (grid.size() <= 0 or grid[0].size() <= 0)
			return 0;

		for (int i = 1; i < grid[0].size(); i++)
		{
			grid[0][i] += grid[0][i-1];
		}

		for (int i = 1; i < grid.size(); i++)
		{
			grid[i][0] += grid[i - 1][0];
		}

		for (int i = 1; i < grid.size(); i++)
		{
			for (int j = 1; j < grid[0].size(); j++)
			{
				grid[i][j] += max(grid[i - 1][j], grid[i][j - 1]);
			}
		}

		return grid[grid.size() - 1][grid[0].size() - 1];
	}
};
