#include <iostream>

int main(int argc, char const *argv[])
{
    union u
    {
        int x;
        int y;
        int z;
    };
    
    u test;
    test.x = 15;
    test.y = 5;
    std::cout << test.x << ", " << test.y;

    return 0;
}
