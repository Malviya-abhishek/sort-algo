#include<iostream>
#include<vector>
#include "sort.h"

using namespace std;

int main(){
    vector<int> v = {5,4,3,2,1};
    Insertion obj;
    obj.insertionSort(v);
    for(int &i : v)
        cout<<i<<" ";
}
