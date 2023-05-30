// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // Implement your solution here

    //init counters to zero
    vector<int>counters(N, 0); // 0 0 0 0 0
    int max_across_counters{0};
    for(size_t i = 0; i< A.size(); i++){
        if(A[i] <= N){ //3
            counters.at(A[i]-1)++; //counters
            max_across_counters = max(max_across_counters, counters.at(A[i]-1));
        }
        else {
            for(auto &el: counters){
                el = max_across_counters;
            }
        }

    }
    //counters [0 0 1 0 0]
    return counters;

}