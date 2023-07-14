//
// Created by Abraham on 10/2/2022.
//
#include "iostream"
#include "map"

using namespace std;

int main(){ // multimap es muy similar a map<type, vector<>>
    multimap<char, int, std::greater<>> multimapa; // <type, type> name si no espesificamos el ordenamiento por
    //default sera de manera asendente, greater<> mayor a menor, less menor a mayor;
    multimapa.insert({'a', 1});
    multimapa.insert({'a',1});
    multimapa.insert({'a',2});
    multimapa.insert({'a',3});
    multimapa.insert({'c',5});

    cout<<"Count :"<<multimapa.count('a'); // cuenta el numero de keys





//    for(auto it : multimapa){
//        cout<<"Key:"<<it.first<<" Data:"<<it.second<<endl;
//    }
//
//    cout<<"Valores de un clave determinada:"<<endl;
//    //obtener todos los valores de una clave determinada
//    pair<multimap<char,int>::iterator, multimap<char,int>::iterator> rango = multimapa.equal_range('a'); //auto nos salva
//    //tomamos el primer par de valores y el ultimo par de valores de la clave seleccionada
//    for(auto it = rango.first; it!=rango.second; ++it){
//        cout<< it->first<< " " << it->second <<endl;
//    }
}
