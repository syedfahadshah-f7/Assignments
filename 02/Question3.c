// Online C compiler to run C program online
#include <stdio.h>

void eveningflights(int flights[5][5]){
    int bestoption=0,minprice=1000;
    printf("\nFlights available in the Evening:\n");
    for(int i=0;i<5;i++){
        for(int j=3;j<4;j++){
            if(flights[i][j]==1){
                printf("Day%d,",i+1);
                if(flights[i][j+1]<minprice){
                minprice=flights[i][j+1];
                bestoption=i+1;
                } // end nested if
            }// end if
        }// end j loop
    }// end i loop
    printf("\nBest Option for Evening Flights is on Day%d and Price is:%d\n",bestoption, minprice);
}// end Evening Flights Loop

void morningflights(int flights[5][5]){
    int bestoption,minprice=1000;
    printf("\nFlights available in the Morning:\n");
    for(int i=0;i<5;i++){
        for(int j=1;j<2;j++){
            if(flights[i][j]==1){
                printf("Day%d,",i+1);
                if(flights[i][j+1]<minprice){
                minprice=flights[i][j+1];
                bestoption=i+1;
                } // end nested if 
            }// end if
            
        }// end j loop
    }// end i loop
    printf("\nBest Option for Morning Flights is on Day%d and Price is:%d\n",bestoption, minprice);
}// end Morning Flights loop

void specificday(int flights[5][5]){
    int day;
    printf("\nWhich Day are you Looking for Flights (1-5):");
    scanf("%d", &day);
    
   
    if(flights[day-1][1]==1){
        printf("\nFlight is avalabile in Morning and Price is:%d\n",flights[day-1][2]);
    }
     if(flights[day-1][3]==1){
     printf("Flight is avalabile in Evening and Price is:%d\n",flights[day-1][4]);
     }  
    else{
     printf("Sorry flights are not Avaliable on this Day%d\n", day);    
    } 
    
}// end specific day calculation

void eachday(int flights[5][5]){
    for(int i=0;i<5;i++){
        printf("Day%d Flights available in ", i+1);
        for(int j=1,k=3;j<=1;j++){
            if(flights[i][j]==1){
                printf("Morning ");
            }
            if(flights[i][k]==1){
                 printf("Evening ");
            }
        }
        printf("\n");
    }
    
    
}// end eachday function
int main() { 
    printf(" Day\t  Morining\t Price\t Evening\t Price\n");
    printf("1 Monday\t  1\t   300\t    0\t     -\n ");
    printf("2 Tuesday\t  1\t   320\t    1\t    310\n ");
    printf("3 Wednesday  0\t    -\t    1\t    280\n");
    printf("4 Thursday\t  1\t   380\t    0\t     -\n");
    printf("5 Friday\t  1\t   375\t    1\t    400\n\n");
                    //Day Morning  price Evening price
    int flights[5][5]={ 1,    1,   300,   0,     00,
                        2,    1,   320,   1,     310,
                        3,    0,   00,    1,     280,
                        4,    1,   380,   0,      00,
                        5,    1,   375,   1,      400};
                        
    eachday(flights);                    
    morningflights(flights);
    eveningflights(flights);
    specificday(flights);
    return 0;
}
