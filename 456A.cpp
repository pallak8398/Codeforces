#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n],B[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i]>>B[i];
	}
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]!=B[i])
		{
			flag=1;
		}
	}
	if(flag==1)
		cout<<"Happy Alex"<<endl;
	else
		cout<<"Poor Alex"<<endl;
	return 0;
}