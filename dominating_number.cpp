#include<unordered_map>
#include<unordered_set>
#include <vector>
using namespace std;
#include<algorithm>
#include<numeric>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int main() {
    // Implement your solution here
    vector<int> A {3, 4, 3, 2, 3, -1, 3, 3};
    unordered_set<int>unique_el{};
    unordered_map<int, int>freq_map{};

    for (auto el: A){
        unique_el.insert(el);
    }
    int result{};
    int no_occurances{};
    for(auto el: unique_el){
        no_occurances = count(A.begin(), A.end(), el);
        if (no_occurances > A.size()/2){
            auto it = find(A.begin(), A.end(), el);
            result = it-A.begin();
        }
    }
    return 0;
}