int solution(vector<int> &A) {
    // Implement your solution here
        if (A.size() <= 2){
            return 0;
        }
        sort(A.begin(), A.end());

        for(int i=0; i<A.size()-2; i++){
            if(A[i]+A[i+1]>A[i+2]){
                return 1;
            }
        }
        return 0;
        
}