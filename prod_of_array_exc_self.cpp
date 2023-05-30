class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 0);
        vector<int> prod_begin(nums.size(), 1);
        vector<int> prod_end(nums.size(), 1);

        prod_begin.at(0) = 1;
        prod_end.at(nums.size()-1) = 1;
        for(int i=1; i<nums.size(); i++){
            prod_begin.at(i) = prod_begin.at(i-1)*nums.at(i-1);
            prod_end.at(nums.size()-i-1) = prod_end.at(nums.size()-i) * nums.at(nums.size()-i);
        }

        for (int i = 0; i< nums.size(); i++){
        answer[i] = prod_end[i]*prod_begin[i];}

        return answer;
    }
};