// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<cmath>
int solution(int N) {
    // Implement your solution here
    long int perimeter = 1000000000;
    long int min_perimeter = 1000000000;
    int N1 {1}; 
    int N2 {N}; 
    while(N1<=sqrt(N)){
        if(N%N1 ==0){
            N2 = N/N1;
            perimeter = 2*(N1+N2);
            min_perimeter = min(perimeter, min_perimeter);
        }
        N1++;
    }
    return min_perimeter;
}