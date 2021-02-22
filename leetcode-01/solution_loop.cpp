// 采用双循环的方法查找索引

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (diff == nums[j])
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
