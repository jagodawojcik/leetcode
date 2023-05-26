#include <iostream>
#include<vector>

int main(){
    std::vector <int> nums = {0, 1, 0, 3, 12};

    for(size_t i=0; i<nums.size()-1; i++){
        for(size_t j=0; j<nums.size()-i-1; j++){
            if (nums[j] == 0){
            int temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = temp;
            }
        }
    }


    return 0;
}