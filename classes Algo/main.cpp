#include<iostream>
#include<vector>
#include "sort.h"

using namespace std;

int main(){
    vector<int> v = {1,5,2,4,3};
    Quick obj = Quick(true);
    obj.quickSort(v);
    for(int &i : v)
        cout<<i<<" ";
}
