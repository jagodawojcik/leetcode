//Iterative Fibonacci solution to meet time demands.

class Solution {
public:
    int climbStairs(int n) {
        
        if (n <= 2){
            return n;
        }

        int one_step = 1;
        int two_steps = 2;
        int current_sum = 0;

        for (int i = 2; i < n; i++){
            current_sum = one_step + two_steps;
            one_step = two_steps;
            two_steps = current_sum;

        }
        return current_sum;
    }
};