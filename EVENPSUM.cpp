#include<iostream>
using namespace std;
int main(){
	int t,sum=1;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
			if((i+j)%2==0)
		  sum+=sum	;
			}
			
		}
		 cout<<sum<<endl;
	}
}
