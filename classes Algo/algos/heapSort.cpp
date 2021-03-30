#include<vector>
#include<iostream>
#include "../sort.h"

using namespace std;

Heap::Heap()
{
    Heap::idx = 0;
}


void Heap::heapify(vector<int>& v)
{
    int n = v.size();
    Heap::v.resize(n+1);
    for(int i = 0 ; i < n ; ++i)
        Heap::add(v[i]);
}


void Heap::add(int x)
{
    Heap::idx++;
    Heap::v[Heap::idx] = x;

    int temp = Heap::idx;

    while(temp){
        if(Heap::v[temp/2] > Heap::v[temp]){
            swap(Heap::v[temp/2] , Heap::v[temp] );
            temp /= 2;
        }
        else
            break;
    }

}


int Heap::get()
{
    if(Heap::idx == 0){
        std::cout<<"Heap Empty"<<std::endl;
        return -1;
    }
    return Heap::v[1];
}


int Heap::pop(){

    if(Heap::idx == 0)
    {
        std::cout<<"Heap Empty"<<std::endl;
        return -1;
    }

    int ans = Heap::v[1];
    swap( Heap::v[1], Heap::v[Heap::idx]);

    int temp = 1;

    while(temp < Heap::idx){
        if(2*temp < Heap::idx and 2*temp + 1 < Heap::idx){
            int a = Heap::v[temp];
            int b = Heap::v[2*temp];
            int c = Heap::v[2*temp+1];

            if( a > b or a > c ){
                if( a >  b and a > c){
                    if(b < c){
                        swap( Heap::v[temp], Heap::v[2*temp]);
                    }
                    else
                        swap( Heap::v[temp], Heap::v[2*temp+1]);
                }
                else if(a > b)
                        swap( Heap::v[temp], Heap::v[2*temp]);
                else
                        swap( Heap::v[temp], Heap::v[2*temp+1]);
            }
            else
                break;

        }
        else if(2*temp < Heap::idx) {
            int a = Heap::v[temp];
            int b = Heap::v[2*temp];

            if(a > b){
                swap( Heap::v[temp], Heap::v[2*temp]);
                
            }
            else
                break;

        }
        else
            break;
    }


    Heap::idx--;
    return ans;
}


void Heap::print()
{
    for(int &i : Heap::v)
        cout<<i<<" ";
    cout<<endl;
}


void Heap::heapSort(vector<int> &v)
{
    Heap::heapify(v);
    int n = v.size();
    for(int i = 0 ; i < n ; ++i)
        v[i] = Heap::pop();
}
