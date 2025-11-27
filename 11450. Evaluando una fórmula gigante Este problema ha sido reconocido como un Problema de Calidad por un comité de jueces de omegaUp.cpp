// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
    double x, y, z, n, n1, n2, d, d1, d2, r;
    cin>>x>>y>>z;
     n1=(2*x+y)/z;
     n2=pow(y,3)-z;
     n=n1*n2;
     d1=(x+2*y+3*z)/(z-2*y-3*x);
     d2=pow(x,2)+pow(z,2);
     d=d1+d2;
     r=n/d;
    cout<<r<<endl;
    return 0;
}