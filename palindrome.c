#include <stdio.h> 
#include <string.h> 
void Palindrome(char str[]) 
{ 
    int l = 0; 
	int h = strlen(str)-1;
	//printf("%d\n",h); 
    while (l < h) 
	{ 
       
		if (str[l++] != str[h--]) 
		{ 
			printf("%s is not Palindrome\n", str); 
			return; 
		} 
	} 
	printf("%s is palindrome", str); 
} 
int main() 
{ 
	
	/*char str;
	printf("Enter the string:");
	scanf("%s",&str);*/
	Palindrome("abba"); 
	Palindrome("aaaa");
	Palindrome("aacccgga");
	return 0; 
}
