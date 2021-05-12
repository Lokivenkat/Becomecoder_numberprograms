#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,res=0;
	cin>>n;
	while(1)
	{
		r=n%10;
		n=n/10;
		res=res+(r*r);
		if(n==0)
		{
			n=res;
			res=0;
			if(n>=1 && n<=9)
			{
				break;
			}
		}
	}
	if(res=1)
	{
	 cout<<"HAppy number";
	}
	else
	{
		cout<<"Not happy number";
	}
}
