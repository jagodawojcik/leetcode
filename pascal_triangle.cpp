class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> answer{};
        vector<int>row {1};

        for(int i=0; i<numRows; i++){
            answer.push_back(row);
            vector<int>new_row{};
            new_row.push_back(1);
            for(int j=0; j<row.size()-1; j++){
                new_row.push_back(row[j]+row[j+1]);
            }
            new_row.push_back(1);
            row = new_row;
        }

        return answer;
    }
};