#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n,x,count=0;
	cin>>n>>x;
	while(n--)
	{
		char ch;
		long long int num;
		cin>>ch;
		if(ch=='+')
		{
			cin>>num;
			x+=num;
		}
		else if(ch=='-')
		{
			cin>>num;
			if(x>=num)
			{
				x-=num;
			}
			else
			{
				count++;
			}
		}
	}
	cout<<x<<" "<<count<<endl;
	return 0;
}