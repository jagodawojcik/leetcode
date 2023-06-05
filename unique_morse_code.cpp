class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string>morse_code{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>coded{};
        string morse_word = "";
        for (auto word: words){
            for (auto letter: word){
                morse_word+= morse_code[letter-'a'];
            }
            coded.insert(morse_word);
            morse_word = "";
        }
    
        return coded.size();
    
    }

};