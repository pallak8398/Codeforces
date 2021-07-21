#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int x,y;
	long int count=0;
	cin>>x>>y;
	if(x==1 && y==1)
	{
		cout<<"0"<<endl;
		return 0;
	}
	while(x>0 && y>0)
	{
		if(x<y)
		{
			x=x+1;
			y=y-2;
		}
		else
		{
			x=x-2;
			y=y+1;
		}
		count++;
	}
	cout<<count<<endl;
}