#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int x=240-k;
	int sum=0,count=0;
	for(int i=1;;i++)
	{
		sum+=(i*5);
		//count++;
		if(sum+k>240)
		{
			if(i>n)
			{
				cout<<n<<endl;
				break;
			}
			else
			{
				cout<<i-1<<endl;
				break;
			}
		}
		
	}
	//cout<<count<<endl;
	return 0;
}