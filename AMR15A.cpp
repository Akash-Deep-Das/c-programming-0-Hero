#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int i,a,even=0,odd=0;
        cin>>a;
        for(i=0;i<n;i++)
     if(a%2==0)
     even+=i;
     else
     odd+=i;
    
    if(even<=odd)
    cout<<"NOT READY"<<endl;
    else
    cout<<"READY FOR BATTLE"<<endl;
}
    return 0;
}

