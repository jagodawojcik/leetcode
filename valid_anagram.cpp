#include <iostream>
#include<string>
using namespace std;   

int main(){
   bool result {true};
    string s {"rat"};
    string t {"car"};
        for(size_t l=0; l<s.size(); l++){
            size_t idx = t.find(s[l]);
            if (idx == string::npos){
                result = false;
            }
            else{
                t.erase(idx, 1);
            }
        }
    cout << result;
    

return 0;
};