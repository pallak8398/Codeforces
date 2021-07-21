#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,prod=1;
	cin>>a>>b;
	int x=min(a,b);
	for(int i=1;i<=x;i++)
	{
		prod*=i;
	}
	cout<<prod<<endl;
	return 0;
}