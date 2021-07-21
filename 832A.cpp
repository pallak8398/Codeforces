#include <iostream>
using namespace std;
#define ll long long int
int main() 
{
	ll n,k,count1=0,count2=0;
	int turn=0;   //sasha->0, lena->1
	cin>>n>>k;
	while(k<=n)
	{
		if(turn==0)
		{
			n=n-k;
			count1++;
			turn=1;
		}
		else if(turn==1)
		{
			n=n-k;
			count2++;
			turn=0;
		}
	}
	if(count1>count2)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}