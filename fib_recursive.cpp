#include <iostream>

using namespace std;

long Fibbonacci(int n){
    if (n <=1){
    return n;}

    return Fibbonacci(n-2) + Fibbonacci(n-1);
}


int main(){

    int n;
    cout << "Enter nth fibbonacci term to find: ";
    cin >> n;

    cout << "Fibbonacci term " << n << " equals to: ";
    cout << Fibbonacci(n); 

    return 0;
}