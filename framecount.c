#include<stdio.h>
#include<string.h>
int main()
{
char s[10] [20];
int x[50],i,n;
printf("ENter the no.of frames:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the frame %d :\n",i);
scanf("%s",s[i]);
}
for(i=0;i<n;i++)
{
x[i] = strlen(s[i])+1;
}
printf("generated frames are : \n");
for(i=0;i<n;i++)
{
printf("%d%s",x[i],s[i]);
}
printf("\n");
return 0;
}

