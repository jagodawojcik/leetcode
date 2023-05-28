class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char>unique_characters;
        
        for(auto c: s){
            unique_characters.insert(c);
        }

        int count_pairs {0};
        int single_letters {0};
        for(auto el: unique_characters){
            int counter = count(s.begin(), s.end(), el);
            count_pairs += counter/2;
            single_letters += counter%2;
        }

        if (single_letters >0){
            return count_pairs*2 +1;
        }
        return count_pairs*2;
    }
};