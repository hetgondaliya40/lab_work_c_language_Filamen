/*
Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,
Input:
Enter any string: hello

Output:
Given string is not a Palindrome.
*/
#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[50];  
    int i,b=0,c=1;
 
    printf("Enter the name : ");
    gets(a);
 
    for(i=0;a[i]!='\0;i++){
	    b++;
    }
	for(i=0; i<b/2; i++){
		if(a[i] != a[b-1-i]){
			c=0;
		}
	}
    	
 	if(c==i){
 		printf("string is palindrome");
	 } 
    else{
    	printf("string is not palindrome");
	}
}
