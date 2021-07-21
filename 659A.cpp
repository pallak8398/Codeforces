#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,a,b,i,k;
	cin>>n>>a>>b;
	if(b==0)
	{
		cout<<a<<endl;
		return 0;
	}
	else if(b>0)
	{
		
		k=a;
		while(b--)
		{
			//i++;
			if(k==n)
				k=1;
			else
				k++;
		}
		cout<<k<<endl;
	}
	else if(b<0)
	{
		
		k=a;
		while(b++)
		{
			//i++;
			if(k==1)
				k=n;
			//else if(k==n)
				
			else
				k--;
		}
		cout<<k<<endl;
	}
	return 0;
}