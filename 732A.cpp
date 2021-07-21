#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r,count=0;
	cin>>k>>r;
	while(1)
	{
		if(((count*k)%10==r)||(((count*k)%10==0)&&count!=0))
		{
			cout<<count<<endl;
			break;
		}
		count++;
	}
	return 0;
}