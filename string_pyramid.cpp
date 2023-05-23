#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    cout << "Enter a string to make a pyramid: ";
    cin >> s;
    cout << "Your string is: " << s << endl;

    size_t len_row = s.length() *2 -1;

    for (size_t i=0; i<s.length(); i++){
        
        string spaces ((s.length()-i-1), ' ');
        cout << spaces;
        
        if (i != 0){
        for (size_t j= 0; j<=i; j++){
            cout << s[j];
        }
        
        for (size_t j=i; j>0; j--){
            cout << s[j-1];
        
        }
        }
        else{cout << s[i];}

        cout << spaces << endl;

    }
    

    return 0;
}