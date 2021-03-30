#include "../sort.h"
#include <vector>

Insertion::Insertion(){
    /* explicitly declared */
}

void Insertion::insertionSort(std::vector<int> &v){
    int n = v.size();
    for(int i = 0 ; i < n ; ++i){
        int temp = i;
        for(int j = i ; j < n ; ++j)
            if(v[temp] > v[j])
                temp = j;
        std::swap( v[i], v[temp] );
    }
}
