#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,rem,sum=1,h=1,level=1;
	cin>>n;
	while(sum<=n)
	{
		h++;
		level+=h;
		sum+=level;
		//rem=n-sum;
	}
	h--;
	cout<<h<<endl;
	return 0;
}