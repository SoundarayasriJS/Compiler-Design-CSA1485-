#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(){
	char a[20];
	int flag,i=1;
	printf("Enter an identifier:");
	scanf("%s",&a);
	if(isalpha(a[0])){
	flag=1;}
	else{
	printf("It is not a valid identifier");}
	while(a[i]!='\0'){
		if(!isdigit(a[i])&& !isalpha(a[i])){
			flag=0;
			break;
		}
		i++;
	}
	if(flag==1){
		printf("Valid identifier");
	}
	else{
		printf("Invalid identifier");
	}
	return 0;
	
}
