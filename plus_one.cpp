        #include<vector>
        #include<iostream>
        using namespace std;
        
        main(){
        
        vector<int> digits {9};
        int carry = 0;
        vector<int> result{};

        if (digits.back()+1 > 9){
            carry = 1;
            for (int i=digits.size(); i>0; i--){
                if (digits[i-1] + carry <= 9){
                    digits[i-1] = digits[i-1] + carry;

                    carry = 0;
                    break;
                }
                else{
                    digits[i-1] = 0;
                    ;
                }
            }
            if (carry == 1){
            result.push_back(carry);
            result.insert( result.end(), digits.begin(), digits.end() );}
        }
        
        digits.back()++;
        
        return 0;
        }