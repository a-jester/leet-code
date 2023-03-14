#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        
        std::vector<int> solution;
        int nonZeroProduct = 1;
        int zeroProduct = 1;
        size_t zeroCount = 0;

        // Find the product given a vector of integers
        for (auto num : nums)
        {
            // If the number is not 0, contribute it to the non zero product
            if (num != 0)
            {
                nonZeroProduct *= num;
            }
            // otherwise, keep track of the zero count
            else
            {
                zeroCount++;
            }
        }

        // for each number, calculate the product as if it were not there
        for (auto num : nums)
        {
            // if the number is 0 and there are more than 1 zeros, push back the zero product
            if (num == 0)
            {
                if (zeroCount > 1)
                {
                    solution.push_back(zeroProduct);
                }
                // otherwise, if there is only 1 zero push back the non zero product
                else
                {
                    solution.push_back(nonZeroProduct);
                }
                
            }
            else
            {
                // if the zero product was established, push it back
                if (zeroProduct == 0)
                {
                    solution.push_back(zeroProduct);
                }
                // otherwise, to find the product without num, push back nonZeroProduct / num
                else
                {
                    solution.push_back(nonZeroProduct / num);
                }
            }
            
        }
        return solution;
    }
};