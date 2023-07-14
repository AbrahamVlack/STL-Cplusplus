//
// Created by Abraham on 9/21/2022.
//

#include "iostream"
#include "vector"
using std::vector;
using std::iostream;
using std::cin;
using std::cout;

int main(){
    vector<vector<int>> arbol;
    int arista, n1, n2; // n1 source n2 destinacion
    cin >> arista;
    arbol.resize(arista);

    for(int i=0; i<arista; i++){
        cin>>n1>>n2;
        arbol[n1].push_back(n2);
    }

    for(auto it: arbol){
        for(auto it2 : it){
            cout<<it2;
        }
    }
}