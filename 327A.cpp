#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,one=0,zero=0;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int maxlength=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			one=0,zero=0;
			for(int k=0;k<n;k++)
			{
				if(k>=i && k<=j)
				{
					if(A[k]==0)
						one++;
					else
						zero++;
				}
				else
				{
					if(A[k]==0)
						zero++;
					else
						one++;
				}
			}
			maxlength=max(maxlength,one);
		}
	}
	cout<<maxlength<<endl;
	return 0;
}