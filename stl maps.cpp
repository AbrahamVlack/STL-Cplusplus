//
// Created by Abraham on 9/28/2022.
//

#include "iostream"
#include "map"
#include "string"
#include "vector"

using namespace std;

int main(){
    map<string, vector<int>> mapa;
    vector<int> n{1,2,3,4,5};
    mapa["b"].push_back(1);
    mapa["a"].push_back(2);
    mapa["a"].push_back(3);
    mapa.insert({"c", n});

    for(auto it: mapa){// orden ascendente
        cout<<it.first;
        for(auto it2 : it.second){
            cout<<it2;
        }
        cout<<endl;
    }

    return 0;
}