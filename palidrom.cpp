#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	system("cls");
	char string[80],c;
	cout<<"enter the string(max. 79 character)";
	cin.getline(string,80);
	//loop to find length of the string.
	for(int len=0;string[len]!='\0';++len);
	int i,j,flag=1;
	for(int i=0,j=len-1;i<len/2;++i,--j)
	{
		if(String[i]!=string[j])
		{
			flag=0;
			break;
		}
		if(flag)
		cout<<"it is palidrom\n";
		else
		cout<<"it is not  a palidrom\n";
		return 0;
	}
}
