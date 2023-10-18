// =================================================================
//
// File: main.cpp
// Author: Ricardo Sierra Roa - A01709887
// Date: 18/10/2023
//
// =================================================================

//Librerias
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// =================================================================
// Funcion para determinar si un arbol enraizado es un abeto o no a 
// partir de cada uno de sus vertices que no son hojas tiene al menos 
// 3 hijos hojas.
//
// @param n numero de nodos / vertices del arbol enraizado y vector 
// los indices de los nodos, es decir quien es su padre de cierto nodo
// @return booleano, si es o no abeto el arbol
// @Complexity	O(n^2)
// =================================================================
bool firTree(int n, vector<int> vertex) {
    // Definir variables y vectores a usar 
    vector<pair<int, int>> matrix;
    vector<pair<int, int>> childMatrix;
    vector<pair<int, int>> parentMatrix;
    vector<int> results;
    int ctr1 = 1;
    int ctr2 = 0;

    // Crear una matriz que contiene los indices de los nodos y el 
    // contenido del nodo
    // Complexity O(n)
    for(int i = 2; i < n + 1; i++){
        matrix.push_back(make_pair(vertex[i - 2], i));
    }

    // Ordenar la matriz a partir de los indices (quick sort)
    // Complexity O(n log n)
    sort(matrix.begin(), matrix.end());
    
    // Child matrix
    // Creacion de la matriz child, donde contiene un nodo padre y 
    // cuantos nodo hijos tiene ese padre
    // Complexity O(n)
    int currentElement1 = matrix[0].first;
    for(int i = 1; i < matrix.size(); i++){
        if(matrix[i].first == currentElement1){
            ctr1++;
        }else{
            childMatrix.push_back(make_pair(currentElement1, ctr1));
            currentElement1 = matrix[i].first;
            ctr1 = 1;
        }
    }
    childMatrix.push_back(make_pair(currentElement1, ctr1));
    
    // Parent matrix
    // Creacion de la matriz parent, donde contiene un nodo y si ese 
    // nodo tiene nodos padre o no y cuantos
    // Complexity O(n^2)
    int currentElement2 = matrix[0].first;
    for(int i = 0; i < matrix.size(); i++){
        if(matrix[i].first == currentElement2){
            for(int j = 0; j < childMatrix.size(); j++){
                if(childMatrix[j].first == matrix[i].second){
                    ctr2++;
                }
            }
        }else{
            parentMatrix.push_back(make_pair(currentElement2, ctr2));
            currentElement2 = matrix[i].first;
            ctr2 = 0;
        }
    }
    parentMatrix.push_back(make_pair(currentElement2, ctr2));
    
    // Result vector
    // Creacion del vector resultante, los segundos elementos de 
    // childMatrix menos parentMatrix para determinar si el 
    // arbol enraizado es abeto o no
    // Complexity O(n)
    for(int i = 0; i < childMatrix.size(); i++){
        int resta = childMatrix[i].second - parentMatrix[i].second;
        results.push_back(resta);
    }
    
    // Regresar si el arbol enraizado es abeto o no
    for(int i = 0; i < results.size(); i++){
        if(results[i] < 3){
            return false;
        }
    }
	
	return true;
}

int main() {
    int n;
    vector<int> vertex;

    cin>>n;

    for(int i = 0; i < n - 1; i++){
        int aux;
        cin>>aux;
        vertex.push_back(aux);
    }

    if (true == firTree(n, vertex)){ // Complexity O(n^2)
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}