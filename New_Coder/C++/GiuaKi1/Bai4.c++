#include <iostream>
using namespace std;
int main () {
    int a;
    cin>> a;
    int b;
    int c=a;
    int n=0;
    while (b>0) {
        b= c%10;
        c=c/10;
        n=n*10+b;

    }
    int sum;
    sum = n+a;
    int s=sum;
    int i=0;
    while (s!=0){
        s=s/10;
        i++;
    }
    int j=i;
    while (j!=3) {
        j--;
        sum=sum/10;
    }
    cout << sum%10;
    return 0;
}