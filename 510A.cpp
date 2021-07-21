#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			if(a==0)
			{
				for(int j=1;j<m;j++)
				{
					cout<<".";
				}
				cout<<"#";
				a=1;
			}
			else if(a==1)
			{
				cout<<"#";
				for(int j=2;j<=m;j++)
				{
					cout<<".";
				}
				a=0;
			}
		}
		else
		{
			for(int j=1;j<=m;j++)
			{
				cout<<"#";
			}
		}
		cout<<endl;
	}
	return 0;
}