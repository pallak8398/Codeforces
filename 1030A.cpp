#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	vector<int>A;
	vector<int>::iterator it;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		A.push_back(num);
	}
	it=find(A.begin(),A.end(),1);
	if(it!=A.end())
	{
		cout<<"HARD"<<endl;
	}
	else
		cout<<"EASY"<<endl;
	return 0;
}