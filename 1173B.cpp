#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int m;
	for(int i=0;i<10000;i++)
	{
		if(2*i>=(n-1))
		{
			m=i+1;
			break;
		}
	}
	cout<<m<<endl;
	// cout<<"1 1"<<endl;
	int k=1;
	int flag=0;
	// for(int k=1;k<n;k++)
	// {
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(k>n)
				{
					flag=1;
					break;
				}
				else if(i+j>=(k-1))
				{
					cout<<i+1<<" "<<j+1<<endl;
					k++;
				}
				else
					continue;
			}
			if(flag==1)
				break;
		}
	// }
	return 0;
}