#include <bits/stdc++.h>
#include "./classLeet/leet.h"

using namespace std;

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Leet leet;

    vector<vector<int>> edges = leet.read2D();
    
    vector<int> ans = findRedundantConnection(edges);
    
    leet.print1D(ans);


    
    return 0;
}