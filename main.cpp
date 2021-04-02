#include <bits/stdc++.h>

using namespace std;

vector<int> parents, ranks;

int findParent(int x){
    if(x == parents[x])
        return x;
    return parents[x] = findParent(parents[x]);
}

void Union(int x, int y){
    int paX = findParent(x);
    int paY = findParent(y);

    if( paX == paY) 
        return;

    if( ranks[paY] > ranks[paX] )
        parents[paX] = paY;
    else
        parents[paY] = paX;
    
    if(ranks[paX] == ranks[paY])
        ranks[paX]++;
}




int findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected.size();
    
    for(int i = 0 ; i < n ; ++i ){
        parents.push_back(i);
        ranks.push_back(0);
    }

    for(int i = 0 ; i < n ; ++i)
        for(int j = i+1 ; j < n ; ++j)
            if(isConnected[i][j])
                Union(i,j);
    
    set<int> diff;

    for(int i = 0 ; i < n ; ++i)
        diff.insert( findParent( i ) );


    
    return diff.size();



}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<vector<int>> isConnected = { 
        {1,0,0,1},
        {0,1,1,0},
        {0,1,1,1},
        {1,0,1,1}    
    };


    cout<<findCircleNum(isConnected)<<endl;


    




    return 0;
}