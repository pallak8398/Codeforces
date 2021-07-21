#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int k2,k3,k5,k6,count=0;
	cin>>k2>>k3>>k5>>k6;
	long int a=min(k2,k5);
	long int b=min(a,k6);
	if(b!=0)
	{
		k2=k2-b;
		k5=k5-b;
		k6=k6-b;
		count+=256*b;
	}
	if(k2!=0 && k3!=0)
	{
		long int c=min(k2,k3);
		k2=k2-c;
		k3=k3-c;
		count+=32*c;
	}
	cout<<count<<endl;
	return 0;
}