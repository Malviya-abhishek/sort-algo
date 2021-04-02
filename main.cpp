#include <bits/stdc++.h>
#include "./classLeet/leet.h"

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Leet obj;

    vector<vector<int>> ans2 = obj.read2D();
    

    
    for(auto i : ans2){
        for(int j : i)
            cout<<j<<" ";
        cout<<endl;
    }

    
    return 0;
}