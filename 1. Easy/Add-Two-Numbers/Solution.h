#include <vector>	// std::vector

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::vector<int> solution;

        // We now have a hopefully smaller vector
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }

                if (nums[i] + nums[j] == target)
                {
                    solution.push_back(i);
                    solution.push_back(j);
                    return solution;
                }
            }
        }
	}
};