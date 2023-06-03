    //UNFINISHED - not working
    
    #include<vector>
    #include<numeric>
    using namespace std;
    
    int main(){
    
    vector<int>A = {1, 2, 3, 3, 3, 4, 1, 2, 7, 4, 6, 2}; 
    // Implement your solution here
    if(A.size()<3){
        return 0;
    }

    vector<int> peaks(A.size(), 0);
    int peaks_count = 0;
    for(int i=1; i<A.size()-1; i++){
        if(A[i]> A[i-1] && A[i] > A[i+1]){
            peaks.at(i) = 1;
            peaks_count++;
        }
    }
    if(peaks_count == 0){
        return 0;
    }
    if(peaks_count == 1){
        return 1;
    }

    
    int max_no_blocks = peaks_count;
    
    for(int k = max_no_blocks; k>=2; k--){
        //check if size of the block is valid
        if(A.size() %k != 0) continue;
        //for the valid number of blocks, save the size
        int size_block = A.size()/k;

        int sum_block =0;
        int i=0;
        for(i=0; i<peaks.size(); i++){
            sum_block = sum_block+peaks[i]; 
            if(((i+1)%size_block == 0) && sum_block!=1) break;
            else if ((i+1)%size_block == 0) sum_block = 0;
        }
        if(i>=A.size()) return k;
    }
    //return 1;
    return 0;
    }