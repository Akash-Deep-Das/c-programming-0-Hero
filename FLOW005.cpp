#include<iostream>
using namespace std;
int main()
{
	int n,a,notes[]={100,50,10,5,2,1};
	cin>>n;
	while(n--)
	{int ans=0;
		cin>>a;
		for(int i=0;i<5;i++)
		{
			ans+=a/notes[i];
			a%=notes[i];
		}
		cout<<ans<<endl;
		
			}	
	return 0;
}
