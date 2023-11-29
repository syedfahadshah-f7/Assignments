// taking number by user and convert it in single digit number by multiplying each digit
#include <stdio.h>

int main() {
    int n,i=0,j=0,k=0,hold;
    do{
    printf("Enter Number and Negative Number Will Exit from program:");
    scanf("%d", &n);
    
    if(n<10 && n>0){ printf("number is already single digit:%d", n);}
    while (n>10){
    if(n<100 && n>10){
       while(n>10){
         if(n<10){ break;}   
        j= n%10;
        i=n/10;
        n=i*j;
        printf("%d=%d*%d\n", n,i,j);
       }
    }
    else if(n<1000 && n>100){
        while(n>10){
            if(n<100){break; }
            k =n %10;
            hold=n/10;
            j=hold%10;
            i =hold/10;
            n=i*j*k;
            printf("%d=%d*%d*%d\n", n,i,j,k);
                }
             }
        }
    }while(n >= 0);printf("program terminated:");
    return 0;
}
