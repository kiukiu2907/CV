#include<iostream>
using namespace std;
int main()
{
	long long int t, p, c;
	long long int s1;
	s1 = 0;
	cin >> t >> p >> c;
	if (t == 1)
	{
		s1 = p * c;
		cout << s1;
	}
	else if (t == 2)
	{
		s1 = ((p-1)/2+1)*c;
		cout << s1;
	}
}

