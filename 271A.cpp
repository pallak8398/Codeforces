#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,m,a,b,c,d;
	cin>>n;
	m=n;
	while(1)
	{
		m++;
		a=m/1000;
		b=m/100 %10;
		c=m/10 % 10;
		d=m%10;
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
			break;
	}
	cout<<m<<endl;
	return 0;
}