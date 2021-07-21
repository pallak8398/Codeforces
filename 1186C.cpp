#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll n)
{
    ll ans=0;
    ll base=1;
    while(n!=0)
    {
        ans+=((n%10)*base);
        n=n/10;
        base=base*2;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string a,b;
	cin>>a>>b;
	ll count=0;
	ll num=0;
// 	stringstream s(b);
// 	s>>num;
    // num=stoi(b);
    // ll dnum=func(num);
    num=bitset<32>(b).to_ullong();
// 	cout<<"1 "<<dnum<<endl;
// 	int num=stoi(b);
	ll n=a.length();
	ll k=b.length();
	if(k>n)
	{
	    cout<<"0"<<endl;
	}
	else
	{
	//n-k+1 no of windows
	string curr="";
	for(ll i=0;i<n-k+1;i++)
	{
	    curr=a.substr(i,k);
	   // cout<<"curr "<<curr<<endl;
	    ll num2=0;
	   // stringstream s1(curr);
	   // s1>>num2;
	   // num2=stoi(curr);
	   // ll dnum2=func(num2);
	   num2=bitset<32>(curr).to_ullong();
	   // cout<<"2 "<<dnum2<<endl;
	   // ll x=dnum^dnum2;
	   ll x=num^num2;
	    ll c=__builtin_popcountll(x);
	   // cout<<"c "<<c<<endl;
	    if(c%2==0)
	        count++;
	}
	cout<<count<<endl;
	}
}