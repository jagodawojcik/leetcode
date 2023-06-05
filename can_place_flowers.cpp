class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;

        if (flowerbed.size() == 0){
            return 0==n;
        }
        if (flowerbed.size() == 1){
            if (flowerbed[0] == 0){return n<=1;}
            else {return 0==n;}
        }
        for(int i=0; i<flowerbed.size(); i++){
            if (flowerbed[i] == 0){
                if (i == 0){
                    if(flowerbed[i+1] == 0){
                        flowerbed[i] =1;
                        count++;
                    }
                }
                else if (i == flowerbed.size()-1){
                    if(flowerbed[i-1] == 0){
                        flowerbed[i] =1;
                        count++;
                    }
                }
                else if (flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                    flowerbed[i] = 1;
                    count++;
                }
            }

            
        }
        
        return count>=n;
    }
};