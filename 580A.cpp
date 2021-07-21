#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, lng, count;
	cin>>n;
	int A[n];
	for(int i=1; i<=n; i++) 
		cin>>A[i];

	lng=1;
	count=1;
	for(int i=2; i<=n; i++){
		if(A[i-1]<=A[i]){
			count++;
		}
		else count=1;

		lng=max(lng, count);
	}

	cout<<lng<<endl;
}