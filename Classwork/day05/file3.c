//print sum of even and odd values from 1 to 50

#include<stdio.h>

int main(){
    
    int oddsum=0, evensum=0;

    for(int i=1;i<=50;i++){
        if(i%2 == 0){
            oddsum =+ i;
        }
        else{
            evensum =+ i;
        }
    }

printf("sum of even value: %d", evensum);
printf("sum of odd value: %d",oddsum); 
}