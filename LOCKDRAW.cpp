#include<iostream>
using namespace std;
int main()
{
	int n;
	int a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		if(a>b && a>c)
		{
			if(b<a && b>c )
			cout<<"NO"<<endl;
			else if(b<a && b==c)
			cout<<"YES"<<endl;
			else
			cout<<"NO";
		}
		else
		cout<<"NO"<<endl;


}
return 0;
	
}
