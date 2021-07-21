#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(x==0 && y==0 && z==0)
	{
		cout<<"0"<<endl;
	}
	else
	{
	if(z<x && z<y)
	{
		if(x>y)
		{
			cout<<"+"<<endl;
		}
		else if(y>x)
		{
			cout<<"-"<<endl;
		}
		else if(x==y)
		{
			cout<<"0"<<endl;
		}
	}
	else if(y>(x+z))
	{
		cout<<"-"<<endl;
	}
	else if(x>(y+z))
	{
		cout<<"+"<<endl;
	}
	else	
		cout<<"?"<<endl;
	}
	return 0;
}