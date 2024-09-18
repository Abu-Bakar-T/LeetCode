class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;  // To store the value and its index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // If the complement exists in the map, return the indices
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }
            
            // Otherwise, add the current number and its index to the map
            numMap[nums[i]] = i;
        }
        
        return {}; // In case no solution is found (though one solution is guaranteed per problem statement)
    }
};
