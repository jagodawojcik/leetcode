int solution(vector<int> &A) {
    // Implement your solution here
    int pair_counter = 0;
    for(int i=0; i<A.size(); i++){
        for(int j=i+1; j<A.size(); j++){
            if( A[i] != A[j] && A[i] + A[j]>= j-i){
                pair_counter++;
            }
        }
    }
    return pair_counter;
}