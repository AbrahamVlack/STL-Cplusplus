//
// Created by Abraham on 9/23/2022.
//

#include "iostream"
#include "forward_list"
#include "vector"
using namespace std;

//Funciones de list

// assing, front, empty, max_size, insert_after, emplace_after, reverse, sort, merge
// splice_after, unique, remove, remove_if, resize, clear,

int main(){
    std::forward_list<int> lista{5,1,4,3,2};
    forward_list<int> lista2{11,12,13,14,15};
    cout<<"Lista :";
    for (auto it : lista) {
        cout<<it<<" ";
    }
    cout<<endl;
    //acceso y consulta
    cout<<"Front: "<<lista.front()<<endl;
    cout<<"Empty: "<<lista.empty()<<endl;
    cout<<"Max size: "<<lista.max_size()<<endl;


    //modificadores
    cout<<"Assing puede ser llenada con (repeticiones, valor):";
    lista.assign(10, 0);
    for (auto it: lista) {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Tambien copia los elementos de otra lista remplazando los anteriores: ";
    lista.assign(lista2.begin(), lista2.end());
    for (auto it : lista) {
        cout<<it<<" ";
    }
    cout<<endl;
    lista.insert_after(lista.begin(), 3, 2);
    cout<<"Inserter after .begin(), 3 , 2: ";
    for (auto it : lista) {
        cout<<it<<" ";
    }
    cout<<endl;
    lista.reverse();
    cout<<"Reverse: ";
    for (auto it : lista) {
        cout<<it<<" ";
    }
    cout<<endl;
    lista.sort();
    cout<<"Sort :";
    for (auto it : lista) {
        cout<<it<<" ";
    }
    cout<<endl;

}