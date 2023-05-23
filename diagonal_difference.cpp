int diagonalDifference(vector<vector<int>> arr) {
    int sum1 = 0;
    int sum2 = 0;
    
    for(size_t row=0; row<arr.size(); row++){
        sum1+=arr.at(row).at(row);
        sum2+=arr.at(row).at(arr.size()-row-1);
    }
    
    
    return abs(sum1-sum2);
}