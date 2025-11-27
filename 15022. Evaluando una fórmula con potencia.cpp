// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y, z, tc, ex, p, n, r;
    cin>>x>>y>>z;
    
    
    tc = 2*x+y-z;
    ex=tc;
    p=pow(tc,ex);
    n = 7 + p;
    
    r = (n/tc);
    
    cout<<r;
    
    return 0;
}