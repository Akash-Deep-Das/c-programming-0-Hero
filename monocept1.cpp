#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(b>a)
		cout<<"no"<<endl;
		else if(a==b)
		cout<<"yes"<<endl;
		else if(a>b)
		cout<<"yes";
		return 0;
	}
}
