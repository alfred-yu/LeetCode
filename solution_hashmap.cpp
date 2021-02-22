// 本题主要是找到和为target的两个数并返回它们在数组中的索引
// 在该解法中用到了hashmap，在逐个遍历数组元素的过程中，如果
// 当前元素不在map中，则以diff（target - nums[i])值为键，当
// 前索引为键值保存在map中，如果在map中，则直接返回map中以当
// 前数值为键的键值和当前索引。
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diffs;

        for (int i = 0; i < nums.size(); i++)
        {
            if (diffs.count(nums[i]))
                return {diffs[nums[i]], i};
            
            diffs[target - nums[i]] = i;
        }

        return {};
    }
};
