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
    char a[100];  
    int i,length,n,b=0;
 
    printf("Enter the name : ");
    gets(a);
    
    length=strlen(a);
 
    for(i=0;i<length;i++)  
    {
    	if(a[i]==a[length-i-1])
    	b++;
 	}
 	if(b==i){
 		printf("string is palindrome");
	 } 
    else{
    	printf("string is not palindrome");
	}
}
