#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y, z;
    cin>>x;
    cin>>y;
    cin>>z;

    double num = pow(2*y + z, 2.8) - z;
    double den = x + y - (x / z);

    double resultado = num / den;

    cout<<fixed;
    cout.precision(6);
    cout<<resultado<<endl;

    return 0;
}
