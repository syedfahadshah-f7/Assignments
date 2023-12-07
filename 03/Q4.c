#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct worker{
    int worker_id;
    char f_name[30];
    char l_name[30];
    int salary;
    char join[30];
    char dept[30];
    
}worker;

int main() {
    worker workers[8] = {
        {001,"Monika","Arora",100000,"2014-2-20 9:00;00", "Hr"},
        {002,"Niharika","Verma",80000,"2014-6-11 9:00;00", "Admin"},
        {003,"Vishal","Singhal",300000,"2014-2-20 9:00;00", "Hr"},
        {004,"Amitabh","Singh",500000,"2014-2-20 9:00;00", "Admin"},
        {005,"Vivek","Bhatti",500000,"2014-6-11 9:00;00", "Admin"},
        {006,"Vipul","Dihwan",200000,"2014-6-11 9:00;00","Account"},
        {007,"Satish","Kumar",75000,"2014-1-20 9:00;00", "Account"},
        {8,"Greetika","Chauhan",90000,"2014-4-11 9:00;00","Admin"}
    };

    char* department[3] = {"Hr", "Admin", "Account"};
    int total_salaries[3];
    int max_salary = 0, me = 0;// me for max_employee

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
            if (strcmp(department[i], workers[j].dept) == 0) {
                int salary = workers[j].salary;
                total_salaries[i] += salary;
                if (max_salary < salary) {
                    max_salary = salary;
                    me = j;
                }
            }
        }
        printf("| %d\t | %s\t | %s\t | %d\t | %s\t | %s\t \n",workers[me].worker_id,workers[me].f_name,workers[me].l_name,workers[me].salary,workers[me].join,workers[me].dept);
        max_salary = 0;
        me = 0;
        
    }

printf("\nTotal Salaries Given to each department:\n");
for(int i=0;i<3;i++){
        printf("Department %s Salary=%d\n",department[i],total_salaries[i]);
}
    return 0;
}
