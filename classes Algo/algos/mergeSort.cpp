#include "../sort.h"
#include "vector"
#include "iostream"

Merge::Merge()
{
    /* explicitly declared */
}


void Merge::mergeSort(std::vector<int>&x){
    Merge::n = x.size();
    Merge::v = x;
    Merge::divider(Merge::v, 0, Merge::n-1);
    x = Merge::v;
}


void Merge::divider(std::vector<int>&v, int left, int right){
    if(left < right){
        int mid = left + (right-left)/2;
        Merge::divider(v,left,mid);
        Merge::divider(v,mid+1,right);
        Merge::merger(v,left,mid,right);
    }
}


void Merge::merger(std::vector<int>&v, int left, int mid, int right){

    int idx = left;

    std::vector<int> lv, rv;

    for(int i = left ; i <= mid ; ++i)
        lv.push_back(v[i]);
    
    for(int i = mid + 1 ; i <= right ; ++i)
        rv.push_back(v[i]);
    
    std::vector<int>::iterator itrL = std::begin(lv);
    std::vector<int>::iterator itrR = std::begin(rv);

    while(itrL != std::end(lv) and itrR != std::end(rv)){
        if( *itrL <= *itrR )
            v[idx] = *(itrL++);
        else 
            v[idx] = *(itrR++);
        idx++;
    }

    while(itrL != std::end(lv))
        v[idx++] = *(itrL++);

    while(itrR != std::end(rv)) 
        v[idx++] = *(itrR++);
}


void Merge::print(){
    for(int &i : Merge::v)
        std::cout<<i<<" ";
    std::cout<<std::endl;

}
