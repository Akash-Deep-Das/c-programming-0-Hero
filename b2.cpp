#include<stdio.h>
#define max 100
int state=1;
void q0(char c){
	if(c=='1')
	state=1;
	else if(c =='0')
	state=2;
	else 
	state=-1;
}
void q1(char c){
	if(c=='1')
	state=2;
	else if(c=='0')
	state=3;
	else 
	state=-1;
}
void q2(char c){
	if(c=='1')
	state=3;
	else if(c=='0')
	state=2;
	else 
	state=-1;
}
int check(char str[]){
	int i,len=0;
	for(i=0;str[i]!='\0';i++)
	len++;
	for(i=0;i<len;i++){
		if(state==1){
			q0(str[i]);
			continue;
		}
		if(state==2){
			q1(str[i]);
			continue;
		}
		if(state==3){
			q2(str[i]);
			continue;
		}
	if(state==3)
	return 1;
	else 
	return 0;
	
	}
}
int main(){
	char str[max],f='a';
	int i;
	printf("String which  is enter:");
scanf("%[^\n]s",str);
	if (check(str))
	printf("String is accepted= %d");
	else
	printf("String is rejected=%d");
	return 0;
	}

