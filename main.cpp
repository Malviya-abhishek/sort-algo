#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    vector<int> v = {4,5,1,8,2,9,2,3,4};
    int temp = 0;
    int value = v[temp];
    for(int i = 1 ; i < v.size() ; ++i){
        if(v[i] <= value){
            swap(v[i], v[temp]);
            temp++;
        }
    }

    for(int i : v)
        cout<<i<<" ";




    return 0;
}