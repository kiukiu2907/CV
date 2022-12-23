#include <iostream>
using namespace std;
int main () {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max1, max2;
    max1 = a;
    if (b > max1) max1=b;
    if (c > max1) max1=c;
    if (d > max1) max1=d;
    max2 = max1;
    if (max2 !=a) max2=a;
    if (max2 !=b) max2=b;
    if (max2 !=c) max2=c;
    if (max2 !=d) max2=d;

    if (max1 !=a) 
        if (max2 <a)
            max2 = a;
    if (max1 !=b) 
        if (max2 <b)
            max2 = b;
    if (max1 !=c) 
        if (max2 <c)
            max2 = c;
    if (max1 !=d) 
        if (max2 <d)
            max2 = d;
    if (max2 >max1);
        cout << max1 << " " << max2;
    else
        cout << max2 << " " << max1;
    return 0;
}