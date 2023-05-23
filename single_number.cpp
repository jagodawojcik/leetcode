class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> freq_map;

        for (int n: nums){
            freq_map[n] ++;
        }  
        for (auto el: freq_map){
            if(el.second == 1){
                return el.first;
            }
        }
    return -1;
    }    
};