#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int t=8,white=0,black=0;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<8;i++)
		{
			if(s[i]=='.')
				continue;
			else if(islower(s[i]))
			{
				if(s[i]=='q')
					black+=9;
				else if(s[i]=='r')
					black+=5;
				else if(s[i]=='b')
					black+=3;
				else if(s[i]=='n')
					black+=3;
				else if(s[i]=='p')
					black+=1;
				else
					continue;
			}
			else if(isupper(s[i]))
			{
				if(s[i]=='Q')
					white+=9;
				else if(s[i]=='R')
					white+=5;
				else if(s[i]=='B')
					white+=3;
				else if(s[i]=='N')
					white+=3;
				else if(s[i]=='P')
					white+=1;
				else 
					continue;
			}
		}
	}
	if(white>black)
		cout<<"White"<<endl;
	else if(black>white)
		cout<<"Black"<<endl;
	else if(black==white)
		cout<<"Draw"<<endl;
	return 0;
}