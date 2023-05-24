class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr {};

        int sum = 0;

        for (int i=0; i<=n; i++){
            int num = i;
            while (num > 0){
            sum += num%2;
            num /= 2;}

            arr.push_back(sum);
            sum = 0;
        }
    return arr;
    }
};