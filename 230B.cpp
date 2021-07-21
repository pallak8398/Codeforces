#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	while(n--)
	{
		long int num,count=0,ans=0;
		cin>>num;
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
				count++;
		}
		if(count==3)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}