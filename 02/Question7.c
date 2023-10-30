
#include <stdio.h>
void sorting(int ages[],int prices[], int n){
    ages[n];
    prices[n];
    
 
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<n;j++){
            if(ages[i]<ages[j]){
                temp = ages[i];
                ages[i]=ages[j];
                ages[j]=temp;
            }
            else if(prices[i]>prices[j]){
                temp = prices[i];
                prices[i]=prices[j];
                prices[j]=temp;
            }
        }// end j loop
    }// end i loop
      printf("Sorted list of ages in assending order:");
   for(int i=0;i<n;i++){
       printf("%d,", ages[i]);
   }
   printf("\n");
   printf("Sorted list of prices in dessending order:");
   for(int i=0;i<n;i++){
       printf("%d,", prices[i]);
   }
}// end function

int main() {
    int n=5;
    int ages[]={15,20,45,35,40};
    int prices[]={800,700,400,500,900};
    
    sorting(ages,prices,n);
  
    return 0;
}
