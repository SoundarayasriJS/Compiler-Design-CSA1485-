#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char st[50];
	int flag=0,count=0;
	printf("The grammar is:S->aS,S->Sb,S->ab\n");
	printf("Enter the string to be checked:\n");
	scanf("%s",&st);
	if(st[0]=='a'){
		flag=0;
		for(count=1;st[count-1]!='\0';count++){
			if(st[count]=='b'){
				flag=1;
				continue;
			}
			else if((flag==1) && (st[count]=='a')){
				printf("The string does not belong to the grammar");
				break;
			}
			else if(st[count]=='a')
				continue;
			else if(flag==1 && (st[count]=='\0')){
				printf("String is accepted");
				break;
			}
			else{
				printf("String not accepted");
			}
		}
				
	}
	return 0;
}
