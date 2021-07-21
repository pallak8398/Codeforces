#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int A[n],flag=0;
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
		//if(A[i]!=0)
		//	flag=1;
	}
	/*if(flag==0)
	{
		cout<<"0"<<endl;
		return 0;
	}*/
	int score=A[k],count=0;
	for(int i=1;i<=n;i++)
	{
		if(A[i]>=score && A[i]!=0)
			count++;
	}
	cout<<count<<endl;
	return 0;
}