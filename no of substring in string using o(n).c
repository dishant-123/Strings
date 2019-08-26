#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(char *a,char *b)
{
	while(*a && *b)
	{
		if(*a!=*b)
			return 0;
		a++;
		b++;
	}
	return (*b=='\0');
}
	char *strstr1(char *curr,char *str2)
	{
	//	while(*curr && *str2)
	//	{
			if(*curr==*str2 && compare(curr,str2))
				return curr;
			return '\0';
	//	}*/
	}

int main()
{
	char str1[20]="abcxyzabcxuzabc";
	char str2[10]="abc";
	char *curr=str1,*curr1;
	int c=0;
	while(*curr!='\0')
	{
		curr1=strstr(curr,str2);
		if(curr1!='\0')
		{
			c++;
		}
			curr=curr+strlen(str2);
	}
	
	printf("%d",c);
	
}
