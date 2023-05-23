#include <iostream>

using namespace std;

long Fibbonacci(int n){
    
    int current = 0;
    int next = 1;
    long fib = 0;
    if (n <= 1){
        fib = n;    
    }
    
    while (n > 1){
        fib = current + next;
        current = next;
        next = fib;
        n--;
    }
    return fib;
}


int main(){
    int n {};
    cout << "Enter nth fibbonacci term to find: ";
    cin >> n;

    cout << "Fibbonacci term " << n << " equals to: ";
    cout << Fibbonacci(n); 

    return 0;
}