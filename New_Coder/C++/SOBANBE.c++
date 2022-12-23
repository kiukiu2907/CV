#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
#define MAX 1000
int main () {
    int a,b;
    int t1 = 0;
    int t2 = 0;
    cin>> a >> b;
    for (int i=1; i<= (a/2); i++)
        if (a % i ==0) 
            t1 += (i);
     for (int j=1; j<= (b/2); j++)
        if (b % j ==0) 
            t2 += (j);
    if ((t1 == b) && (t2 == a)) cout <<"YES";
        else cout<< "NO";
    return 0;
}