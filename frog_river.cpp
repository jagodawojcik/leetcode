#include <set>
#include <unordered_set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, vector<int> &A) {
    // Implement your solution here
    set<int>unique_elements{};

    for(auto el: A){
        unique_elements.insert(el);
    }

    for (int i = 1; i <= X; i++){
        if (unique_elements.contains(i)){
            ;
        }
        else{
            return -1;
        }
    }

    unordered_set<int> steps_req;
    for(int i = 1; i<=X; i++){
        steps_req.insert(i);
    }

    int idx{};
    for(int i=0; i<A.size(); i++){
        if(steps_req.contains(A[i])){
            steps_req.erase(A[i]);
            if(steps_req.empty()){
                idx = i;
                break;
            } 
        }
    }

    return idx;

}