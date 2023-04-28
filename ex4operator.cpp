#include<stdio.h>
int main(){
	char s[20];
	printf("Enter an expression:");
	scanf("%s",&s);
	switch(s[0]){
		case'>':if(s[1]=='='){
		printf("\n Greater than or equal to");}
		else{
		printf("Greater than");}
		break;
		case'<':if(s[1]=='='){
		printf("\n Less than or equal to");}
		else{
		printf("Less than");}
		break;
		case'=':if(s[1]=='='){
		printf("\n Equal to");}
		else{
		printf("Assignment");}
		break;
		case'!':if(s[1]=='!'){
			printf("\n Not equal");}
			else{
			printf("Bit not");}
			break;
			case'&':if(s[1]=='&'){
			printf("\n Logical AND");}
			else{
			printf("Bitwise AND");}
			break;
			case'|':if(s[1]=='|'){
			printf("Logical OR");}
			else{
			printf("Bitwise OR");}
			break;
			case'+':if(s[1]=='+'){
			printf("\n Addition");}
			break;
			case'-':if(s[1]=='-'){
			printf("Sub");}
			break;
			case'*':if(s[1]=='*'){
			printf("Multiplication");}
			break;
			case'/':if(s[1]=='/'){
			printf("\n Division");}
			break;
			case'%':if(s[1]=='%'){
				printf("Modulus");
			}
			break;
			default:printf("\n Not an operator");}
			return 0;		
			
		}
