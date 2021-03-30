#include "../sort.h"
#include <iostream>
#include <vector>

Quick::Quick()
{
    Quick::randomizer = false;
}


Quick::Quick( bool randomizer  )
{
    Quick::randomizer = randomizer;
}


void Quick::quickSort(std::vector<int> &v)
{
    Quick::n = v.size();
    Quick::v = v;
    Quick::sorter(0, n-1);
    v = Quick::v;
}

void Quick::sorter(int start, int end)
{
    if(start < end){

        if(Quick::randomizer)
            Quick::randomSwap(start, end);

        int temp = start;
        int value = Quick::v[temp];

        for(int i = start+1 ; i <= end ; ++i){
            if( Quick::v[i] <= value)
                std::swap(Quick::v[i] , Quick::v[temp++]);
        }
        Quick::sorter(start, temp-1);
        Quick::sorter(temp+1, end);
    }
}

void Quick::randomSwap(int start, int end){
    int range = end - start;
    int rad = start + rand() % (range);
    std::swap(Quick::v[end], Quick::v[rad] );
}






/*
class Quick
{
private:
bool randomizer;
std::vector<int> v;
public:
    Quick( bool randomizer = false );
    void quickSort(std::vector<int> &);
    void sorter(int left, int right);
    void randomSwap(int left, int right);
};
*/