#include<iostream>
#include<array>
using std::cout;
using std::array;


int main(){
    array<int, 4> ar{1,2,3,4};
//    cout<<ar.at(0); //excepcion out of range
//    cout<<ar[1]; // valor basura
    cout<<ar.front()<<std::endl; // primer elemento
    cout<<ar.back(); // ultimo elemento
}
