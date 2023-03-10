#include <vector>			// std::vector
#include <string>			// std::string
#include <unordered_map>	// std::unordered_map
#include <algorithm>		// std::sort

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {

        // Solutions are stored into an unordered map of string vectors
        std::unordered_map<std::string, std::vector<std::string>> solutionMap;
        std::vector<std::vector<std::string>> solutionFinal;

        for (size_t i = 0; i < strs.size(); i++) {

            // Make a copy of the string for hashing but store the original value
            std::string sortedWord = strs[i];
            std::sort(sortedWord.begin(), sortedWord.end());

            solutionMap[sortedWord].push_back(strs[i]);

        }

        // Traverse unordered map 
        for (auto x : solutionMap) {
            solutionFinal.push_back(x.second);
        }

        return solutionFinal;
    }
};