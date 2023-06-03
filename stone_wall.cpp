#include<vector>

//unfinished
int main() {
    // Implement your solution here
    std::vector<int> H = {8, 8, 5, 7, 9, 8, 7, 4, 8};
    int min_height = 1000000000;
    int counter = 1;
    for(int i = 1; i< H.size(); i++){
        if (H[i] > H[i-1]){
            counter++;
        }
        else if (H[i] == H[i-1]){
            ;
        }
        else if (H[i] < H[i-1]){
            if(H[i] < min_height){
                min_height = H[i];
                counter++;
            }

        }
        
    }
    return 0;
}