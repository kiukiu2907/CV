#include <iostream>
using namespace std;
int main (){
    int n,spt,x;
    int a[100];
    int t=0;
    spt =0;
    while (cin>>x) {
        a[spt]= x;
        spt++;
    }
    for (int i = 0; i < spt; i++) {
    t += a[i];
    }
    if (t%10==0) cout<< "DEP";
        else if (t%10 ==5) cout <<"TRUNGBINH";
            else cout<< "XAU";
    return 0;
}