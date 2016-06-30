#include<stdio.h>
#include<string.h>
#define MAXLEN 50
void reverseString(char*,int,int);
void reverseWords(char*, int);
int main()
{
int startword, endword;
char string[MAXLEN]="logu abi";
printf("Input string : %s\n",string);
reverseString(string,0,strlen(string)-1);
reverseWords(string,strlen(string));
printf("Output string: %s\n",string);
return;
}
void reverseString(char* buffer, int startIndex, int endIndex)
{
int i,j,k;
for(j=startIndex,k=endIndex;j<k;j++,k--)
{
i=buffer[j];
buffer[j]=buffer[k];
buffer[k]=i;
}
}
void reverseWords(char* buffer, int strlength)
{
if(*buffer=='\0')        //check for null
return;
//extract a word from the buffer and reverse it
  // to get back the original word.
int startword=0,endwoed=0;
while(endword<strlength)
{
while(buffer[endword]!=' ' && buffer[endword]!='\0')
{
endword++;
}
reverseString(buffer,startword,endword-1);
startword=++endword;
}
return 0;
}
