//Rotate array every kth element

#include<stdio.h>

void main(){

    int a[1000],i,n,k,j,temp;
   
    printf("enter the size: ");
    scanf("%d",&n);
   
    printf("\n enter the element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    Printf("enter value of K: ");
    scanf("%d",&k);
    
    

    for(j=1;j<=k;j++){
    temp = a[0];
        for(i=0;i<n-1;i++)
        {
            a[i] = a[i+1];
        }
        a[i] = temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}