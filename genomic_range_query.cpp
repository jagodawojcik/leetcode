// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // Implement your solution here
    
    size_t no_queries = P.size();
    vector<int> answer{};
    for (size_t i = 0; i<no_queries; i++){
        int start_pos = P[i];
        int end_pos = Q[i];

        string substring = S.substr(start_pos, (end_pos-start_pos)+1);

        if(substring.find('A') != string::npos){
            answer.push_back(1);
        }
        else if(substring.find('C') != string::npos){
            answer.push_back(2);
        }
        else if(substring.find('G') != string::npos){
            answer.push_back(3);
        }
        else {
            answer.push_back(4);
        }
        
        }
        
    return answer;

    }