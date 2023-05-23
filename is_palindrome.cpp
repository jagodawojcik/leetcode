#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "A man, a plan, a canal: Panama";
    string new_str = "";
    for(size_t i = 0; i<s.size(); i++){
        if (isalnum(s[i])){
            new_str += tolower(s[i]);
        }
    }

    string reversed = "";
    for(size_t i=new_str.size(); i>0; i--){
        reversed += new_str[i-1];
    }

    bool result = (reversed == new_str);
    cout << result; 
return 0;

}