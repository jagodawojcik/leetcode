class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "xcvbnm";
        vector<string>ans{};
        bool flag1, flag2, flag3 {false};
        for (auto w: words){
            for(auto c: w){
                if (row1.find(tolower(c)) == string::npos){
                    flag1=true;
                }
                if (row2.find(tolower(c)) == string::npos){
                    flag2=true;
                }
                if (row3.find(tolower(c)) == string::npos){
                    flag3=true;
                }
            }
            if (!flag1 || !flag2 || !flag3){
                ans.push_back(w);
            }
            flag1 = false;
            flag2 = false;
            flag3 = false;
        }
        return ans;
    }
};