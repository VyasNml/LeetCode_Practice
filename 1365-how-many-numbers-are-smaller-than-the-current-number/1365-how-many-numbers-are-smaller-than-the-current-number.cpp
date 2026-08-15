#include <vector>

class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        // Step 1: Create a frequency array for numbers 0 to 100
        std::vector<int> count(101, 0);
        for (int num : nums) {
            count[num]++;
        }
        
        // Step 2: Convert frequencies into running running totals
        // Each index will now store the total count of numbers smaller than or equal to that index
        for (int i = 1; i <= 100; i++) {
            count[i] += count[i - 1];
        }
        
        // Step 3: Map the original numbers to their smaller count
        std::vector<int> result;
        for (int num : nums) {
            if (num == 0) {
                result.push_back(0); // No number can be smaller than 0 based on constraints
            } else {
                result.push_back(count[num - 1]); // Total numbers smaller than 'num'
            }
        }
        
        return result;
    }
};
