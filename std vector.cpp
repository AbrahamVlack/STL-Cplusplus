//
// Created by Abraham on 9/21/2022.
//

#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void fun(const int*, int);

int main(){
    //inicializacion
    // vector<data type> name; empty form
    // vector<data type> name {0,1,2,3}; uniform form
    // vector<data type> name = {0,1,2,3}; initializer form
    // vector<data type> name(range, value);

    vector<int> vec, arr;
    vec = {1,2,3,4,5,6};
    arr = {11,12,13,14,15,16,17,18,19};

    // consulta
    // size(), capacity(), empty()
    cout<<"Size: "<<vec.size()<<std::endl;
    cout<<"Capacity: "<<vec.capacity()<<std::endl;
    cout<<"Vacio: "<<vec.empty()<<std::endl;
    // Acceso
    // [], at(), front(), back(), data()
    cout<<"vec[0]: "<<vec[0]<<std::endl;
    cout<<"vec.at(0): "<<vec.at(0)<< std::endl;
    cout<<"front first: "<<vec.front()<<std::endl; // primer elemento
    cout<<"back last:"<<vec.back()<<std::endl; // ultimo elemento
    fun(vec.data(), vec.size()); // da el puntero del primer elemto de el vector

    // Modificadores
    // insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), reserve(), erase(), clear()
    vec.insert(vec.begin()+6, 7); // insert en la posicion y valor deseado;
    cout<<"insert en pos 6: ";
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<std::endl;
    vec.emplace(vec.begin()+7, 8);
    cout<<"emplace en pos 7: ";
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<std::endl;
    // para tipos de datos primitivos no importa si usamos insert o emplace pero para objetos sera mejor usar
    // emplace porque evita copiar objetos incesarios, empleces es mas eficiente en ese sentido

    vec.push_back(9);
    cout<<"push back: "<<vec.at(vec.size()-1)<<std::endl;
    vec.emplace_back(10);
    cout<<"emplace push back: "<<vec.at((vec.size()-1))<<std::endl;
    // de la misma manera push back y emplace push back no importa para datos primitivos
    // emplace es mejor cuando se maneja objetos
    vec.pop_back();
    cout<<"Pop back: "<<vec.at(vec.size()-1)<<std::endl; //pop back elimina el ultimo elemento

    vec.reserve(10); // podemor reserver memoria util si tenemos una tentativa de memoria
    cout<<"reserve: "<<vec.capacity()<<std::endl;

    vec.swap(arr);
    cout<<"Swap: "<<std::endl;
    cout<<"Vec 1: ";
    for(auto it : vec){
        cout<<it<<" ";
    }
    cout<<std::endl<<"Vec 2: ";
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<std::endl;
    vec.erase(vec.begin()+3); // erase borra una posicion en particular
    cout<<"Clear: ";
    vec.clear();
    for(auto it : vec){
        cout<<it;
    }
}

void fun(const int *a, int size){
    cout<<"using pointers: ";
    for(int i=0; i<size; i++){
        cout<<(*a)*i<<" ";
    }
    cout<<std::endl;
}