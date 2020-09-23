#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char a[26]={'A','B','C','D','E','F','G','H','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=i;j++)
            printf(" ");
         for(j=6-i;j>=0;j--)
             prinft("%c ",a[j]);
       prinft("\n");



}}
