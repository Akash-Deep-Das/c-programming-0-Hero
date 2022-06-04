#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long int a,b,c;
	while(n--)
	{
		cin>>a>>b>>c;
	if(a>b && a>c)
	{
		if(b<a && b>c)
		cout<<b<<endl;
		else
		cout<<c<<endl;
	}
	else if(b>a && b>c)
	{
		if(b<a && a>c)
		cout<<a<<endl;
		else
		cout<<c<<endl;
	}
	else if(c>a && c>b)
	{
		if(b<c && b>a)
	cout<<b<<endl;
	else
	cout<<a<<endl;
	}
	}
	return 0;
}
/*
3
120 11 400
400
10213 312 10
312
10 3 450
450*/
