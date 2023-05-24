        #include<iostream>
        #include<string>
        #include<unordered_map>
        using namespace std;
        int main(){
        string ransomNote = "aca";
        string magazine = "abbca";
        unordered_map<char, int>ransom;
        unordered_map<char, int>magazine_map;

        bool result = true;

        for (size_t j=0; j<ransomNote.size(); j++){
            ransom[ransomNote[j]] += 1;
        }
        for (size_t j=0; j<magazine.size(); j++){
            magazine_map[magazine[j]] += 1;
        }

        for (size_t i=0; i<ransomNote.size(); i++){
            if (magazine_map[ransomNote[i]] >0){
            ransom[ransomNote[i]] -= 1;
            magazine_map[ransomNote[i]] -= 1;
            }
        }
        //cout << ransom.size();
        for (auto e: ransom){
            if(e.second != 0){
                result = false;
            }
        }
        cout << result;
   
        return 0;
        }
