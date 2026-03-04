#include<iostream>
#include <vector>//this declares the vector container to store the input array and output indices.
#include <unordered_map> // Include the unordered_map header
using namespace std;
class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) // Corrected loop syntax
        {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()){
                return {mp[complement], i};
            }
            mp[nums[i]] = i; // Corrected insertion logic
        }
        return {};
    }

};