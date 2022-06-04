#include<iostream>
using namespace std;
int main()
{
	int t;
	int n,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>y;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
int flag=1;
for(int i=0;i<n;i++){
	if((b[i]-a[i])!=x && (b[i]-a[i])!=y){
	
	flag=0;
	break;
}}
if(flag==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;}
return 0;

}
