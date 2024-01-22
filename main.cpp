#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        std::unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        int duplicate = -1, missing = -1;
        for (int i = 1; i <= nums.size(); i++) {
            if (count[i] == 2) {
                duplicate = i;
            } else if (count[i] == 0) {
                missing = i;
            }
        }

        return {duplicate, missing};
    }
};
