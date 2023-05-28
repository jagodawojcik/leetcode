class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    
    }
};


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         for(int el: nums){
//             int counter = count(nums.begin(), nums.end(), el);
//                 if (counter > 1){
//                     return true;
//                 }
//             }
//         return false;
//         }
    
//     };

