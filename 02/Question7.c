
#include <stdio.h>
void sorting(int arr[][],int n){
    arr[2][n];
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<n;j++){
            if(arr[1][j]>arr[1][j+1]){
                temp = arr[1][j];
                arr[1][j]=arr[1][j+1];
                ages[1][j+1]=temp;
            }
             if(arr[2][j]<arr[2][j+1]{
                temp = arr[2][j];
                arr[2][j]=arr[2][j+1];
                arr[2][j+1]=temp;
            }
        }// end j loop
    }// end i loop
   for(int i=0;i<2;i++){
   for(int j=0;j<n;j++){
       printf("%d,", arr[i][j]);
   }
    printf("\n");
       
   }
}// end function

int main() {
    int n=5;
    int arr[2][5]={{15,20,45,35,40},
                {800,700,400,500,900}};
                for(int i=0;i<2;i++){
    printf("Initial Array");
   for(int j=0;j<n;j++){
       printf("%d,", arr[i][j]);
   }
    printf("\n");
       
   }
    
    sorting(arr,n);
  
    return 0;
}
