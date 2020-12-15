#include <stdio.h>
#include <string.h>

void main()
{
	int count=0;
	char str[9] = {'a','b','c','d','e','i','j','o','u'};
	int i,n;
	/*while(count !=  str[9]){
		printf("Element not correct");
	}*/
	printf("Enter the character:");
	scanf("%c",&str);
	/*for(i=0;i<n;i++){
		//count+=1;
		printf("Enter the string:");
		scanf("%c",&str);
	}*/
	//for(i=0;i<str;i++){
	//count=0;
	
	if(("str == a")||("str == e")||("str == i")||("str == o")||("str == u")) {
		printf("Character is a vowel");
	    count++;
	   } 
	else
		printf("Character is not a vowel");
    

}