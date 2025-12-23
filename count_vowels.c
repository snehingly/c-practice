#include<stdio.h>
int main(){
	char str[200];
	int i,count=0;
	printf("Enter your string: ");
	fgets(str,200,stdin);
	
	for(i=0;str[i] != '\0'; i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'
		||str[i]=='u'||str[i]=='A'||str[i]=='E'
		||str[i]=='I'||str[i]=='O'||str[i]=='U'){
		count++;	
		}
	}
	
	printf("Enter no. of vowels: %d ",count);
	return 0;
}
