#include <bits/stdc++.h>
using namespace std;

inline int __lcm(int x, int y){
    return ( x / __gcd(x,y) ) * y;
}

inline int gcd(int x, int y){
    if(y == 0)
        return x;
    return gcd(y, x%y);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int x = 100;
    int y = 65;

    cout<< ( __gcd(0, x) ) ;


    

    return 0;
}