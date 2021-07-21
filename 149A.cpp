#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,A[12];
	cin>>k;
	if(k==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	for(int i=0;i<12;i++)
	{
		cin>>A[i];
	}
	sort(A,A+12,greater<int>());
	long int sum=0;
	int count=0,flag=0;
	for(int i=0;i<12;i++)
	{
		sum+=A[i];
		count++;
		if(sum>=k)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	cout<<count<<endl;
	return 0;
}