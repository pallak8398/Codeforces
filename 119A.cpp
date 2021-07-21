#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	int take=0,f=0;   //simon's turn->0, antisimon's turn->1
	while(1)
	{
		if(f==0)
		{
			take=__gcd(n,a);
			if(n>=take)
			{
				n-=take;
				f=1;
			}
			else if(n<take)
			{
				cout<<"1"<<endl;
				break;
			}
		}
		else
		{
			take=__gcd(n,b);
			if(n>=take)
			{
				n-=take;
				f=0;
			}
			else if(n<take)
			{
				cout<<"0"<<endl;
				break;
			}
		}
	}
	return 0;
}