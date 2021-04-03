#include <bits/stdc++.h>
#include "./classLeet/leet.h"

using namespace std;

// vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
// }


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    Leet leet;

    string s1 = "[1,2,3,4,5]";

    vector<int> v1 = leet.read1D(s1);

    // for(int i : v1)
    //     cout<<i<<" ";
    // cout<<endl;

    leet.print1D< int >(v1);

    // cout<<leet.fun<int>(5,10)<<endl;
    // cout<<leet.fun<char>('q','p')<<endl;

    

    
    return 0;
}