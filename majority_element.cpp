class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(auto el: nums){
            int counter = count(nums.begin(), nums.end(), el);
            if (counter > nums.size()/2){
                return el;
            }
        }
        return nums[0];
    }
};