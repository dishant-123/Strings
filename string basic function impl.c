#include<stdio.h>
int strlen(char *str)
{
	int c=0;
	while(str[c])
	{
		c++;
	}
	return c;
}
int strcmp(char *s1,char *s2)
{
	int l1=strlen(s1),i;
	int l2=strlen(s2);
	if(l1>l2)
		return 1;
	else 
		return -1;
	for(i=0;i<l1;i++)
	{
		if(s1[i]>s2[i])
			return 1;
		if(s1[i]<s2[i])
			return -1;
	}
	return 0;
}
char * strcat(char *str1,char *str2)
{
	int l1=strlen(str1),i,k=0;
	int l2=strlen(str2);
	for(i=l1;i<l1+l2;i++)
	{
		str1[i]=str2[k];
		k++;
	}
	str1[i]='\0';
	return str1;
}
char * strrev(char *str)
{
	int l=strlen(str);
	char c,i;
	for(i=0;i<l/2;i++)
	{
		c=str[i];
		str[i]=str[l-i-1];
		str[l-i-1]=c;
	}
	return str;
}
char * strcpy(char *s1,char *s2)
{
	int l=strlen(s2),i;
	for(i=0;i<l;i++)
	{
		s1[i]=s2[i];
	}	
	return s1;
}
int strstr(char *str1,char *str2)
{
	
}
int main()
{
	char str1[50]="HELLO";
	char str2[20]="WORLD IN PROGRAMMING";
	printf("%s \n",strcpy(str1,str2));
//	printf("%d",strlen(str1));	
}
