#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,d;
	cin>>n>>d;
	int A[n],time=0,count=0,flag=0;
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n;i++)
	{
		time+=A[i];
		if(i<n-1)
		{
			time+=10;
			count+=2;
		}
		if(time>d)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		int x=d-time;
		count+=x/5;
		cout<<count<<endl;
	}
	else if(flag==1)
	{
		cout<<"-1"<<endl;
	}
	return 0;
}