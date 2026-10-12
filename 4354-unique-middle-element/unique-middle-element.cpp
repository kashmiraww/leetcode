class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid = nums.size()/2;
        return std::count(nums.begin(), nums.end(), nums[mid])==1;
    }
};