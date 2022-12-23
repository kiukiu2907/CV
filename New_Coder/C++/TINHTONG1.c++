#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int n;
    cin>>n;
    int h=0;
    for (int i=1; i<= n; i++)
        h= h+ 1/(i*i*i);
    cout <<setprecision(3)<<h;
    return 0;
}