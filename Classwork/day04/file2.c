#include<stdio.h>

int main(){
    int id, sal, phn ;
    char name, gen,addr;

    printf("enter id for emplyee\n");
    scanf("%d", &id);

    printf("enter name for emplyee\n");
    scanf("enter name %c", &name);

    printf("enter gender for employee\n");
    scanf("%c", &gen);

    printf("enter phone number\n");
    scanf("%d", &phn);

    printf("enter address\n");
    scanf("%c",&addr);

    //Printing the details of employee

    printf("ID\t name\t gender\t salary\t phone\t address\n");
    printf("%d\t %c\t %c\t%d\t %c",id,name,gen,phn,addr);

return 0;
}