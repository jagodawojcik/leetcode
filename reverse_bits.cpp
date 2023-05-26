#include<iostream>
#include<string>
#include<cmath>
#include <bitset>

using namespace std;
int main(){
    uint32_t n = 6;
    string rev_binary = "";
    while(n != 0){
        rev_binary += to_string(n%2);
        n = n/2;
    }
    size_t bits = rev_binary.size();
    int add_bits = 32-bits;
    for (int i = 0; i < add_bits; i++){
        rev_binary += '0';
    }
    uint32_t binary = 0;
    for (size_t i=0; i<32; i++){
        int j = 31-i;
        binary += pow(2,j)*int(rev_binary[i]-'0');
    }
    cout << binary;
    return 0;
}
//Alternative solution
    // uint32_t n = 43261596;
    // string binary = bitset<32>(n).to_string();
    // string resultBinary;

    // for (int i = binary.length() - 1; i >= 0; i--) 
    // {
    //     resultBinary += binary[i];
    // }
    
    // return stoi(resultBinary, 0, 2);

