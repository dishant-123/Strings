//making anagram of two string and return no of char we have to delete
//abc
//abcabc
//ouput =3;
#include<iostream.h>
using namespace std;
int main()
{
int pos1[26],i,k=0,c=0;
int pos2[26];
for(i=0;i<26;i++)
pos1[i]=pos2[i]=0;
for(i=0;i<s1.length();i++)
{
    pos1[s1[i]-'a']+=1;
}
for(i=0;i<s2.length();i++)
{
    pos2[s2[i]-'a']+=1;
}
for(i=0;i<26;i++)
{
    c=c+abs(pos1[i]-pos2[i]);
}
printf("%d",c);
}