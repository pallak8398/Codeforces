#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n,a=0;
	cin>>n;
	if(n>=100)
	{
		a+=(n/100);
		n=n%100;
	}
	//n=n%100;
	if(n>=20)
	{
		a+=(n/20);
		n=n%20;
	}
	//n=n%20;
	if(n>=10)
	{
		a+=(n/10);
		n=n%10;
	}
	//n=n%10;
	if(n>=5)
	{
		a+=(n/5);
		n=n%5;
	}
	//n=n%5;
	if(n>=1)
	{
		a+=n;
	}
	cout<<a<<endl;
	return 0;
}