#include<unordered_map>
#include<unordered_set>
#include <vector>
using namespace std;
#include<algorithm>
#include<numeric>


vector<int> get_leader(vector<int> vec){
    
    unordered_set<int>unique_el{};
    vector<int>vec_leaders{};

    for (auto el: vec){
        unique_el.insert(el);
    }

    int no_occurances{};
    for(auto el: unique_el){
        no_occurances = count(vec.begin(), vec.end(), el);
        if (no_occurances > vec.size()/2){
            auto it = find(vec.begin(), vec.end(), el);
            vec_leaders.push_back(vec[it-vec.begin()]);
        }
    }

    return vec_leaders;
    }

int main() {

    vector<int> A = {4, 3, 4, 4, 4, 2};
    vector<int> left;
    vector<int> right = A;
    int count_leaders = 0;
    for(int i=0; i<A.size(); i++){
        
        left.push_back(A[i]);
        right.erase(right.begin());

        vector<int>leaders_A = get_leader(left);
        vector<int>leaders_B = get_leader(right);
        for(auto l: leaders_A){
            if(find(leaders_B.begin(), leaders_B.end(), l) != leaders_B.end()){
                count_leaders++;
            }
        }

    }
    
    return 0;
};