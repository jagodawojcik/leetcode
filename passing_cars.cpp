
int solution(vector<int> &A) {
    // Implement your solution here

    long long int zero_counter=0;
    long long int passing_cars=0;
    
    for(auto el: A){
        if (el == 0){
            zero_counter++;
        }
        else if(el == 1){
            passing_cars += zero_counter;
        }
    }
    if (passing_cars > 1000000000) {
        return -1;
    }

    return passing_cars;

}