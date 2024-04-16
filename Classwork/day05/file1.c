#include<stdio.h>

int main(){
    char ch;
    ch = getchar();
    printf("\nch=%c",ch);
    putchar(ch);
    putc(ch,stdout);

    char name[20];
    fgets(name,sizeof(name)-1,stdin);
    puts(name);
    printf("\n\n");
    return 0;
}