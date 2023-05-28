        #include <iostream>
        #include<string>
        #include<stack>
        using namespace std;
        int main(){
        
        
        string s {"ab##"};
        string t {"a#c#"};
        
        stack<char> new_str, new_str_sec;

        for (auto c: s){
            if (c != '#'){
                new_str.push(c);
            }
            else if(c == '#' && !new_str.empty()){
                new_str.pop();
            }
        }
        
        for (auto ch: t){
        if (ch != '#'){
            new_str_sec.push(ch);
        }
        else if(ch == '#' && !new_str_sec.empty()){
            new_str_sec.pop();
        }

        }

        bool result = (new_str == new_str_sec);

        return 0;

        }