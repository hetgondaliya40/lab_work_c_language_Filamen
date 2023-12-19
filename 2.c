/*

Q.2 Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/
#include<stdio.h>
#include<string.h>

void main(){
	
	char a[100];
	int count=0;
	int i,c;
	
printf("Enter the name : ");
 gets(a);
	
	for(c='a'; c<='z'; c++){
            count=0;
		for(i=0;a[i]!=NULL;i++){
			if(c==a[i]){
				count ++;
			}
			printf("%c => %d\n",c,count);
		}
	}
	
	
}
