#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,m,a,b,count=0;
	cin>>n>>m;
	if(m==n)
		cout<<"0"<<endl;
	else if(m<n)
	{
		cout<<n-m<<endl;
	}
	else if(m>n)
	{
		while(n!=m)
		{
			if(m>n)
			{
				if(m%2==0)
				{
					m=m/2;
					count++;
				}
				else
				{
					m++;
					count++;
				}
			}
			if(m<n)
			{
				m++;
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}