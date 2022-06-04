#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,count=1;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=b;j++){
			if((i+j)%2==0)
			count+=count;
			}
		}
		
		cout<<count<<endl;
	
	}
}
