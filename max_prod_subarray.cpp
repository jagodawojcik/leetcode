#include <vector>
using namespace std; 
 
 main() {
    vector<int>nums = {-2};
    if (nums.size() <= 1){
        return nums[0];
        }

    vector<int>slice{};
    vector<int>min_slice{};
    int prod = 1;
    int max_prod = -2147483647;
            
    for(int i=0; i<nums.size(); i++){
        for (int win_size=1; win_size<=nums.size()-i; win_size++){
            slice = std::vector<int>(nums.begin()+i, nums.begin()+i+win_size); 
            for(auto el: slice){
                prod *= el;
            }
            if (prod > max_prod){
                max_prod = prod;
            }
            prod = 1;
        }
    }

        return 0;
 }