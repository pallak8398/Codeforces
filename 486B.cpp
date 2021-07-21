#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int m,n,flag=0;
	cin>>m>>n;
	int A[m][n]={1},B[m][n],C[m][n]={0};
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			A[i][j]=1;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>B[i][j];
			if(B[i][j]==0)
			{
				for(int k=0;k<m;k++)
					A[k][j]=0;
				for(int p=0;p<n;p++)
					A[i][p]=0;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int x=0;
			for(int k=0;k<m;k++)
				x=(x|A[k][j]);
			for(int p=0;p<n;p++)
				x=(x|A[i][p]);
			C[i][j]=x;
			if(C[i][j]!=B[i][j])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==1)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}