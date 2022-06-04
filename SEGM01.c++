#include<iostream>
using namespace std;
int main()
{
    int i,n;
    char a[10];
    cin>>n;
    while(n--)
    {
        for(i=0;i<10;i++)
        cin>>a[i];
        if(a[i]==1)
        {for(i=0;i<10;i++)
            if(a[i+1]==1)
            cout<<"YES"<<endl;
        }
        else 
        cout<<"NO"<<endl;
        
    }
    return 0;
}
