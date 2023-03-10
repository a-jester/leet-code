#include <string>		// std::string
#include <algorithm>	// std::remove_if

bool isNotAlNumOrSpace(char c) {
    return (!isalnum(c) || isspace(c));
}

class Solution {
public:
    bool isPalindrome(std::string s) {

        s.erase(std::remove_if(s.begin(), s.end(), isNotAlNumOrSpace), s.end());
        const size_t sLength = s.length();

        for (long start = 0, end = sLength -1; start < sLength; start++, end--)
        {
            if (tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
        }
        return true;
    }
};