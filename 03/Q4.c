#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printing_data(int start, char** workers[8][6]) {
    for (int i = start; i <= start; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%s\t |", workers[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char* workers[8][6] = {
        {"001","Monika","Arora","100000","2014-2-20 9:00;00", "Hr"},
        {"002","Niharika","Verma","80000","2014-6-11 9:00;00", "Admin"},
        {"003","Vishal","Singhal","300000","2014-2-20 9:00;00", "Hr"},
        {"004","Amitabh","Singh","500000","2014-2-20 9:00;00", "Admin"},
        {"005","Vivek","Bhatti","500000","2014-6-11 9:00;00", "Admin"},
        {"006","Vipul","Dihwan","200000","2014-6-11 9:00;00", "Account"},
        {"007","Satish","Kumar","75000","2014-1-20 9:00;00", "Account"},
        {"008","Greetika","Chauhan","90000","2014-4-11 9:00;00", "Admin"}
    };

    char* department[3] = {"Hr", "Admin", "Account"};
    int total_salaries[3];
    int max_salary = 0, max_employee = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
            if (strcmp(department[i], workers[j][5]) == 0) {
                int salary = atoi(workers[j][3]);
                total_salaries[i] += salary;
                if (max_salary < salary) {
                    max_salary = salary;
                    max_employee = j;
                }
            }
        }
        printing_data(max_employee, workers);
        max_salary = 0;
        max_employee = 0;
        
    }

printf("\nTotal Salaries Given to each department:\n");
for(int i=0;i<3;i++){
        printf("Department %s\t Salary=%d\n",department[i],total_salaries[i]);
}
    return 0;
}

