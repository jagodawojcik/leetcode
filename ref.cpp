#include<iostream>
int main() {
    int x = 10;
    int &ref = x;
    ref = 100;

    std::cout << x;

    return 0;
}