//split the string with spaces implementation abc xyz uvw mnp ,res[0]="xyz" res[1]="uvw".....
//sc=space count so to check how many string are formed
//m is basically maximum character allocate to each string.
#include<stdio.h>
int main()
{
	char arr[40]="abcccc mnopccc uvwc mnpccccc mdsffdssvgwff";
	int start=0,i=0,k=0,l=0,m=0,sc=0,cc=0;
	while(arr[l]!='\0')//doing this to allocate correct memory to res array.
	{
		if(arr[l]==' ')
		{
			sc++;
			if(cc>m)
				m=cc;
			cc=0;
		}
		else 
		{
			cc++;
		}
		l++;
		
	}
	
	if(cc>m)
		m=cc;
	char **res=(char **)malloc(sizeof(char *)*(sc+1));
	for(i=0;i<sc+1;i++)
	{
		res[i]=(char *)malloc(sizeof(char)*m);
	}
	int end=0;
	while(1)
	{
		while(arr[end]!=' '&& arr[end]!='\0')
		{
			end++;
			
		}
		res[k]=arr+start;
		k++;
		if(arr[end]!='\0')
		{
			arr[end]='\0';
		}
		else
		{
			break;
		}
		start=end+1;
		end=start;
	}
	for(i=0;i<k;i++)
	{
		printf("%s \n",res[i]);
	}
}
