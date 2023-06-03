class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        multiset<int>my_set {};
        for(int i=0; i<m; i++){
            my_set.insert(nums1[i]);
        }

        for(auto el: nums2){
            my_set.insert(el);
        }
        nums1.clear();
        for(auto el: my_set){
            nums1.push_back(el);
        }

    }
};