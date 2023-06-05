class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<char>letters_plate{};
        for(auto c: licensePlate){
            if (isalpha(c)){
                letters_plate.push_back(tolower(c));
            }
        }

        sort(words.begin(), words.end(), []
        (const std::string& first, const std::string& second){
            return first.size() < second.size();
        });

        char current_letter = letters_plate[0];
        int counter = 0;
        int max_counter = letters_plate.size();
        vector<string>words_org = words;
        for (int w=0; w< words.size(); w++){
            for (auto c: letters_plate){
                if(find(words[w].begin(), words[w].end(), c) == words[w].end()){
                    max_counter = letters_plate.size();
                    break;
                }
                if (words[w].find(c) != string::npos){
                    words[w].erase(words[w].find(c),1);
                    max_counter--;
                    if (max_counter == 0){
                        return words_org[w];
                    }
                }

            }
            
        }
        return words[0];
    }
};