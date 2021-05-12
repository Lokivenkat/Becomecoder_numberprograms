#include<iostream>

using namespace std;

int main()

{

    int n,r,res=0,temp;
    cin>>n;
   
    temp=n;

    while(n)

    {

        r=n%10;

        res=res*10+r;

        n=n/10;

    }

    if(temp==res)

    {

        cout<<"it is a palindrome";

    }

    else{

        cout<<"it is not a palindrome";

    }

}
