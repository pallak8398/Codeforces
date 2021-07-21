#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main() 
{
	ll n,k,i;
	cin>>n>>k;
	ll A[n];
	for(i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	stack<ll>s;
	s.push(A[0]);
	for(i=1;i<n;i++)
	{
		while(!s.empty() && A[i]>s.top() && A[i]<=s.top()+k)
			s.pop();
		s.push(A[i]);
	}
	cout<<s.size()<<endl;
	return 0;
}