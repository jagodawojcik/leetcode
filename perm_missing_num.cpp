// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    if (A.empty()){
        return 1;
    }

    if (A.size() == 1){
        if (A[0] == 1){
            return 2;
        }
        else{ return 1; }
    }
    sort(A.begin(), A.end());

    if (*(A.end()-1) != A.size()+1){
        return A.size()+1;
    }

    for (size_t i=0; i<A.size(); i++){
        if (A.at(i) != i+1){
            return i+1;
        }
    }

    return 0;
}