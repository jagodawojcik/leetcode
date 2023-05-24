
    int firstBadVersion(int n) {
        
        int left = 0;
        int right = n;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long long left = 0;
        long long right = n;

        long long mid = (right-left)/2;
        long long min_bad {};
        while (left <= right){
            mid = left+(right-left)/2;
            if (isBadVersion(mid) == 1){
                min_bad = mid;
                right = mid - 1;
            }
            else{ left = mid+1;}
        }
        return min_bad;

    }
};