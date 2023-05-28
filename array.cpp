#include <iostream>


template <int T>
class Array{
    int size{T};
    int values[T];


public:
Array() = default;
~Array() = default;
Array(int init_val){
    for(auto &val: values){
        val = init_val;
    }
};
void fill(int value){
    for(auto & val: values){
        val = value;
    }
};

int get_size(){return size;};
int &operator[](int index){
    return values[index];
};

};


int main(){
    Array <5> arr(5);
    

    return 0;
}