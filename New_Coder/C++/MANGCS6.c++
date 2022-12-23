#include <iostream>
using namespace std;
int main (){
    int x;
    int n[100];
    int s=0;
    while (cin>>x) {
        n[s]= x;
        s++;
    }
    for (int i= 0 ; i< s; i++){
        cout << n[i]<< " ";
        if (n[i]%2!=0) cout<<"0"<< " ";
    } 
    return 0;
}