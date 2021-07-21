#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(A[i][0]=='O' && A[i][1]=='O')
		{
			flag=1;
			A[i][0]='+';
			A[i][1]='+';
			break;
		}
		else if(A[i][3]=='O' && A[i][4]=='O')
		{
			flag=1;
			A[i][3]='+';
			A[i][4]='+';
			break;
		}
	}
	if(flag==0)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
	return 0;
}