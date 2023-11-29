
#include <stdio.h>
int temp1=0;
int temp2 =0;

void ascendingorder(int arr[][2]){

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(arr[j][0] < arr[i][0]){
                 temp1 = arr[j][0];
                arr[j][0] = arr[i][0];
                arr[i][0] = temp1;

                 temp2 = arr[j][1];
                arr[j][1] = arr[i][1];
                arr[i][1] = temp2;
            }
        }
    }
} //end ascendingorder

void descendingorder(int arr[][2]){

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5 ; j++){
            if(arr[j][1] > arr[i][1]){
                 temp1 = arr[j][0];
                arr[j][0] = arr[i][0];
                arr[i][0] = temp1;

                temp2= arr[j][1];
                arr[j][1] = arr[i][1];
                arr[i][1] = temp2;
            }
        }
    }
} //end descendingorder

int main() {
    int n=5;
    int arr[5][2]={15,800,45,500,40,900,35,400,20,600};
    
    printf("Initial Array\n");
    printf("Age,price\n");
    for(int i=0;i<n;i++){
   for(int j=0;j<2;j++){
       printf("%d,", arr[i][j]);
   }
    printf("\n ");
   }
   ascendingorder(arr);
    printf("\n");
    printf("Shirt details based on age in ascending order\n");
    printf("Age,price\n");
    for(int i=0;i<n;i++){
   for(int j=0;j<2;j++){
       printf("%d,", arr[i][j]);
   }
    printf("\n");
   }
   descendingorder(arr);
  printf("\n");
   printf("Shirt details based on age in decending order\n");
    printf("Age,price\n");
    for(int i=0;i<n;i++){
   for(int j=0;j<2;j++){
       printf("%d,", arr[i][j]);
   }
    printf("\n");
   }
    return 0;
}
