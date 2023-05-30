    #include <iostream>
    #include <algorithm>
    #include <numeric>
    #include <vector>
    using namespace std;

    int main(){
    
    vector<int> A = {4, 2, 2, 5, 1, 5, 8};
    int start_pos {};
    float sum = 0;
    float avg = 2147483647.0;
    int min_start_pos{};
    for(size_t i=0; i<A.size()-1; i++){
        start_pos = i;
        for(int win_size=2; win_size<=A.size()-i; win_size++){
            
            sum = accumulate(A.begin()+i, A.begin()+i+win_size, 0);
            if(sum/win_size < avg){
                avg = sum/win_size;
                min_start_pos = i;
            }
            
        }
    }

    std::cout << min_start_pos;
    return 0;

    };