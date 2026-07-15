//twosum approach using hashmap 
//(O(n) complexity)
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int> &nums, int target){
        unordered_map<int, int> numsmap;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            if(numsmap.count(complement)){
                return{numsmap[complement], i};
            }
            numsmap[nums[i]] = i;
        }
        return {};
    }
};