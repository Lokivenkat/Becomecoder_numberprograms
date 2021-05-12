#include<iostream>
using namespace std;
int main()
{
	int n,r,res=0;
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res+r*r;
		if(n==0)
		{
			n=res;
		}
	    if(n==1)
	    {
		cout<<"Happy number";
		break;
	    }
	    else
	    {
		cout<<"Not Happy number";
		break;
	    }
    }
}
