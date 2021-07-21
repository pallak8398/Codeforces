#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int x=240-k;
	int sum=0,count=0;
	for(int i=1;i<=n;i++)
	{
		sum+=(i*5);
		count++;
		if(sum>x)
		{
			if(i>n)
			{
				cout<<n<<endl;
				return 0;
			}
			else
			{
				cout<<i-1<<endl;
				return 0;
			}
		}
		
	}
	//cout<<count<<endl;
	return 0;
}