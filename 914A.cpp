#include<bits/stdc++.h>
#include<math.h>
using namespace std;
/*int check_perfect(long int num)
{
	float n=sqrt(num);
	if(n*n==float(num))
		return 1;
	else
		return 0;
}*/
int main()
{
	int n;
	cin>>n;
	long int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	sort(A,A+n);
	for(int i=n-1;i>=0;i--)
	{
		int a=A[i];
		if(((int)sqrt(a)*(int)sqrt(a))!=A[i])
		{
			cout<<A[i]<<endl;
			break;
		}
		else 
			continue;
	}
	return 0;
}