#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int number = nums[i];
            int remaining = target - number;

            if (map.find(remaining) != map.end()) {
                int index = map[remaining];
                if (index != i) {
                    return {index, i};
                }
            }

            map[number] = i;
        }

        return {};
    }
};