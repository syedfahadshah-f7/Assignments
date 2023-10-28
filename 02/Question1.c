
#include <stdio.h>

int main() {
    int innings,batsman;
    printf("Enter Number of Batsman:");
    scanf("%d", &batsman);
    
    printf("\nEnter Number of Innings:");
    scanf("%d", &innings);
    
    int arr[batsman][innings];
    // Taking Inputs
    for(int i=0;i<batsman;i++){
        printf("\nEnter Innings of Batsman No%d:", i+1);
        for(int j=0;j<innings;j++){
            scanf("%d", &arr[i][j]);
        }// end j loop
    }// end i loop
    
    // Calculating Statics
   
    for(int i=0;i<batsman;i++){
         int totalrun=0, averagerun=0, centuries=0, fifties=0;
         printf("\nFOR BATSMAN NUMBER%d:", i+1);
        for(int j=0;j<innings;j++){
            totalrun += arr[i][j];
            if(arr[i][j]>=50){
                fifties++;
                if(arr[i][j]>=100){
                    centuries++;
                }// end nested if
            }// end if
        }// end j loop
         printf("\nNumber of Centuries:%d", centuries);
         printf("\nNumber of Fifties:%d", fifties);
         printf("\nTotal Runs Scored:%d", totalrun);
         printf("\nAverage Runs per inning:%d\n", totalrun/innings);
         
    }// end i loop
    return 0;
}// end main 
