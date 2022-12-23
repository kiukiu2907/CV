#include <iostream>
using namespace std;
int main (){
    float n;
    float s1=1;
    float s2;
    float d=1;
    cin>> n;
    for (int i=0; i<n ; i++){
        s1=s2;
        s1= s2+ (((2*(n+1))/(2*n+3)) * d);
        d= s1-s2;
    }
    cout<< s1;
    return 0;
}