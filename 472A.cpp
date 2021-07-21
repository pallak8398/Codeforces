#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	bool isPrime=true;
	for(int i = 2; i <= n / 2; ++i)
	{
		if(n % i == 0)
    		{
		      isPrime = false;
		      break;
	    	}
	}
	if(isPrime)
		return 1;
	else
		return 0;
}
int main()
{
	long int n;
	cin>>n;
	int num=floor(n/2);
	int num2=n-num;
	if(!isprime(num) && !isprime(num2))
	{
		cout<<num<<" "<<num2<<endl;
		return 0;
	}
	else
	{
		while(isprime(num) || isprime(num2))
		{
			num--;
				num2++;
		}
		cout<<num<<" "<<num2<<endl;
	}
	
	return 0;
}