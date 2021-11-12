#include<stdio.h>
#include<string.h>

int main(){
    int i=0,start,end,frame=0;
    char str[100];
    scanf("%s",str);
    while(i<strlen(str)){
        start = (int) str[i]-'1'+1;
        end = (int) str[i + start - 1] - '1' + 1;
        frame += 1;
        printf("start: %d end: %d frame: %d\n",start,end,frame);
        i += start;
    }
    return 0;
}
