#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	long long int x=(n+1)/2;
	if((n+1)%2==0)
	{
		cout<<x<<endl;
		return 0;
	}
	cout<<n+1<<endl;
	return 0;
}