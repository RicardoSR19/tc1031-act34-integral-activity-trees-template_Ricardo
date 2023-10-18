// =================================================================
//
// File: main.cpp
// Author: Ricardo Sierra Roa - A01709887
// Date: 17/10/2023
//
// =================================================================
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool firTree(int n, vector<int> vertex) {
    vector<pair<int, int>> matrix;
    vector<pair<int, int>> childMatrix;
    vector<pair<int, int>> parentMatrix;
    vector<int> results;
    int ctr1 = 1;
    int ctr2 = 0;

    for(int i = 2; i < n + 1; i++){
        matrix.push_back(make_pair(vertex[i - 2], i));
    }

    sort(matrix.begin(), matrix.end());
    
    //Child matrix
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
    
    //Parent matrix
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
    
    //Result vector
    for(int i = 0; i < childMatrix.size(); i++){
        int resta = childMatrix[i].second - parentMatrix[i].second;
        results.push_back(resta);
    }
    
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

    if (true == firTree(n, vertex)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    return 0;
}