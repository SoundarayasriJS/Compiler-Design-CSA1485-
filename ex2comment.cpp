#include<stdio.h>
int main(){
	int i;
	char st[30];
	printf("Enter a comment:");
	scanf("%s",&st);
	if(st[0]=='/'){
		if(st[1]=='/')
		printf("It is a comment");
		else if(st[1]=='*'){
			for(i=2;i<=30;i++){
				if(st[i]=='*'&& st[i+1]=='/'){
					printf("It is a comment");
				}
			}
		}
	}
	else{
		printf("It is not a comment");
	}
return 0;}
