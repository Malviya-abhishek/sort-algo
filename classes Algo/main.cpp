#include<iostream>
#include<vector>
#include "sort.h"

using namespace std;

int main(){
    vector<int> v = {5,4,3,2,1};
    Quick obj;
    obj.quickSort(v);
    for(int &i : v)
        cout<<i<<" ";
}
