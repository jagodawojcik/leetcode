// you can use includes, for example:
// #include <algorithm>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // Implement your solution here
    stack<int>fish{};
    int survived = 0;
    
    for (int i=0; i<B.size(); i++){
        if(B[i] == 1){
            fish.push(i);
        }
        if(B[i] == 0 && !fish.empty()){
            while(A[fish.top()] < A[i] && !fish.empty()){
                fish.pop();
            }
        }
        if(B[i] == 0 && fish.empty()){
            survived++;
        }
    }
    return survived + fish.size();
}