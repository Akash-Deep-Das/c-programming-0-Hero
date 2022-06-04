#include<iostream>
using namespace std;
int main(){
	int a,b;
	char ch;
	cout<<"enter the value of operands";
	//enter the value of a,b;
	cin>>a>>b;
	cout<<"enter the value of operator";
	cin>>ch;
	switch(ch){
		case '+': int sum;
        sum=a+b;
		cout<<sum<<endl;
		break;
		case '*': int product;
        product=a*b;
		cout<<product<<endl;
		break;
	}
return 0;
}