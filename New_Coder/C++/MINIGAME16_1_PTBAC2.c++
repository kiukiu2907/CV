#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
     float a, b, c, delta, x1, x2;
    cin>>a>>b>>c;
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout<<setprecision(10) <<fixed << "-1";
            } else
                cout << "0" ;
        } else { 
            cout<< "1"<<endl;
            if (c!=0)
                cout<< setprecision(10) <<fixed<< (c)/-b;
                else cout<<"0.0000000000";
        }
    } else {
        delta = b*b - 4*a*c;
        if(delta > 0) {
            cout<< "2"<<endl;
            x1 = (-(b)-sqrt(delta))/(2*a);
            x2 = (-(b)+sqrt(delta))/(2*a);
            if (x1>x2) {
                cout <<setprecision(10) <<fixed<<x2<<endl;
                cout <<setprecision(10) <<fixed<<x1;
            }
            else {
                cout<<setprecision(10) <<fixed <<x1<<endl;
                cout <<setprecision(10) <<fixed<<x2;
            }
        } else if ( delta == 0) {
            cout << "1"<<endl;
            if (b==0) cout << "0.0000000000";
            else 
                cout <<setprecision(10) <<fixed<< (b)/(-2*a);
        } else {
            cout << "0";
        }
    }
    return 0;
}