// you can use includes, for example:
#include <algorithm>
#include <numeric>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    
    
    
    int total_sum = accumulate(A.begin(), A.end(), 0);
    int min_diff = abs(total_sum);
    int left_sum = 0;
    int right_sum = total_sum;
    for(size_t i = 0; i< A.size(); i++ ){
        left_sum += A.at(i);
        right_sum -= A.at(i);
        min_diff = min(min_diff, abs(left_sum-right_sum));
    }


    return min_diff;

}