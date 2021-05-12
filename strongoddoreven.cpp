#include<iostream>
using namespace std;
int main()
{
    int n,r,ec=0,oc=0,tc=0;
    cin>>n;

    while(n)
    {
        r=n%10;
		n=n/10;
		
		if(r%2==0)
		{
		 ec++;	
		}
		else
		{
		 oc++;
		}
		tc++;
    }

    if(ec==tc)

    {
	cout<<"Strong even";
    }
    else if(oc==tc)
	{
     cout<<"Strong odd";
    }
    else
    {
   	cout<<"Mixed number";
	}
}
