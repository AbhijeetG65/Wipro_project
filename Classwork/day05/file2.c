/*

*/


#include<stdio.h>

int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age < 18 ){
        printf("person is minor not eligible for vote");
    }
     else{
        if(age >= 18 && age <= 65){
            printf("person is adult and can vote");
        }
        else{
            printf("person is a senior");
        }

     }
     

   
    


}