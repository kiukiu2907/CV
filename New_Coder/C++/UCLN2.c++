#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main() {
	long long int a, b;
	cin >> a >> b;
	a=abs(a);
	b=abs(b);
	if (a == 0 || b == 0)
	    cout << a + b;
        else if (a > 0 && b <= 10 ^ 18) {
    	  while (a!=b) { 
            if (a > b)a-=b;
            else b-=a;
        }
        cout<< a;
	}
	return 0;
}
