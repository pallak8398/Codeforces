#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	cin>>m;
	int B[m],x,count=0;
	for(int i=0;i<m;i++)
		cin>>B[i];
	sort(A,A+n);
	sort(B,B+m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(B[j]>0)
			{
				x=abs(A[i]-B[j]);
				if(x==0 || x==1)
				{
					count++;
					//cout<<A[i]<<" "<<B[j]<<endl;
					B[j]=-1;
					break;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}