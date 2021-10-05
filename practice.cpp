#include <iostream>

void swap(int* a, int* b){
    int* temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << (*a) <<" " << (*b);
}

int main(){
    int* a, *b ;
    int c = 5 ;
    int d = 6;
    a = (&c);
    b = (&d);
    swap(a, b);
}