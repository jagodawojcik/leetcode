        #include<iostream>
        #include<string>
        #include<algorithm>
        #include<cmath>
        using namespace std;
        int main(){

        string a = "11";
        string b = "1";

        size_t n = max(a.length(), b.length());
        int diff_a = n- a.length();
        int diff_b = n- b.length();

        string zeros_holder = "";
        for (int i =0; i<diff_a; i++){
            zeros_holder += '0';
        }
        a = zeros_holder+ a;
        
        zeros_holder = "";
        for (int i =0; i<diff_b; i++){
            zeros_holder += '0';
        }
        b = zeros_holder+ b;

        int carry = 0;
        string result = "";
        for (int i = a.length() - 1; i >= 0; i--)
        {   
            result += to_string((a[i]+b[i]+carry)%2);
            carry = ((a[i]-'0')+(b[i]-'0')+carry)/2;

        }

        if (carry == 1){
            result += '1';
        }

        reverse(result.begin(), result.end());
        cout << result;
        //WRONG APPROACH
        // string a = "1010";
        // string b = "1011";
        // int a_dec = {};
        // int b_dec = {};

        // for(int i=a.size()-1; i>=0; i--){
        //     a_dec += int(a[i] - '0') * pow(2, a.size()-i-1);
        // }

        // for(int i=b.size()-1; i>=0; i--){
        //     b_dec += int(b[i] - '0') * pow(2, b.size()-i-1);
        // }

        // int dec_result = a_dec+b_dec;
        // string rem = "";
        // while(dec_result!=0){
        //     rem += to_string(dec_result%2);
        //     dec_result = dec_result/2;
        // }
        // reverse(rem.begin(), rem.end());
        return 0;

    }