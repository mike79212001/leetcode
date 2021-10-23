// 1: create vector to return
#include<algorithm>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool found = false;
        vector<int> result;

        for (int i = 0; i < nums.size() && (false == found); ++i) {
            int temp = target - nums[i];

            for (int j = i+1; j < nums.size(); ++j) {
                if (temp == nums[j]) {
                    found = true;
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

// 2: return result directly
#include<algorithm>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();

        for (int i = 0; i < length; ++i) {
            int temp = target - nums[i];

            for (int j = i+1; j < length; ++j) {
                if (temp == nums[j]) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// 3: use hash table
#include<unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashTable;

        int length = nums.size();
        for (int i = 0; i < length; ++i) {
            if (hashTable.find(target-nums[i]) != hashTable.end()) {
                return {hashTable[target-nums[i]], i};
            } else {
                hashTable[nums[i]] = i;
            }
        }

        return {};
    }
};
