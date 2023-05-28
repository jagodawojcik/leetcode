class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 1){
            return strs[0];
        }        
        
        string prefix {""};
        string test_string{""};

        for (auto c: strs[0]){ 
            prefix += c;
            for(auto string: strs){
                if (string.find(prefix) != 0){
                    prefix.pop_back();
                    return prefix;
                }
            }
        }
        
        return prefix;

    }
};