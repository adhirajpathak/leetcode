// Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

// The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.

// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left = 0, right = numbers.size() - 1;
        while(left < right) {
            int sum = numbers[left] + numbers[right];
            if(sum == target) {
                res.push_back(left + 1); //since its not 0 based
                res.push_back(right + 1);
                return res;
            }    
            else if(sum > target)
                --right;
            else
                ++left;
        }
        return res;
    }
};