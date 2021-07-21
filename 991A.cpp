#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	if(a==0 && b==0 && c==0 && n==0)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	int d=(a+b)-c;
	if(d<0 || a<c || b<c)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	if(n>d)
		cout<<n-d<<endl;
	else 
	{
		cout<<"-1"<<endl;
	}
	return 0;
}