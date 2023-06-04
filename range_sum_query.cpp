#include <vector>
#include <numeric>
#include<algorithm>
using namespace std;
class NumArray {
public:
    vector<int>nums_{};
    NumArray(vector<int>& nums) {
        nums_ = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        sum = accumulate(nums_.begin()+left, nums_.begin()+right, 0);
        
        return sum;
    }
};

int main(){
    vector<int> vect = {-2, 0, 3, -5, 2, -1};
    NumArray sol(vect);
    int sum = sol.sumRange(0, 2);

    return 0;
}