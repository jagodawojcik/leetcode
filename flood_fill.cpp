#include <vector>
#include<iostream>
using namespace std;

int main(){
    
    vector<vector<int>> image = {{0,0,0},{0,0,0}};
    cout << image[0].size() << endl;
    cout << image.size() << endl;
    


    int sr =1;
    int sc =0;
    int color = 2; 
    
    int original_color = image[sr][sc];
    image[sr][sc] = color;
    size_t elements = image.size()*image[0].size();
    for (size_t n=0; n<elements; n++){
        for (size_t i=0; i<image.size(); i++){
            for (size_t j=0; j<image[0].size(); j++){
            
            int left = j-1;
            int right = j+1;
            int up = i-1;
            int down = i+1;
            
            if (image[i][j] == original_color){
            if(left >= 0 && left <= image[0].size()-1){
            
                if (image[i][left] == color ){
                    image[i][j] = color;
                } 
            }

            if(right >= 0 && right <= image[0].size()-1){
                if (image[i][right] == color){
                    image[i][j] = color;
                } 
            }
            
            if (up >= 0 && up <= image.size()-1){
             if (image[up][j] == color){
                    image[i][j] = color;
                } 
            }
            
            if (down >= 0 && down <= image.size()-1){
                if (image[down][j] == color){
                    image[i][j] = color;
                } 
            }
            }

        }
    }
    }
    
    return 0;

}