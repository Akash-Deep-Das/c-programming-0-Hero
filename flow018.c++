#include<iostream>
using namespace std;
int main()
{
    int n=20,t=1000;
    cin>>n;
    while(n--)
    {
    int total=1;
        
        cin>>t;
        for(int i=1;i<=t;i++)
        {
            total=total*i;
        
        }
           cout<<total<<endl;
    }
}
/*3
3
4
5
*/
