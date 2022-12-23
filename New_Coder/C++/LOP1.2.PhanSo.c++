#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int a,b;
    int s;
    cin >>a>>b;
    cout << a <<"/"<<b<<endl;
    cout << a<<endl;
    cout << b<<endl;
    cout << b<< "/" <<a<< endl;
    if (a == 0 || b == 0)
	    s=a+b;
    	  while (a!=b) { 
            if (a > b) {
                a=a-b;
                s=a;
            }
            else {
                b=b-a;
                s=b;
            }
        }
    return 0;
}