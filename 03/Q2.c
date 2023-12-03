#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* getRandomName(char* namesPool[], int poolSize) {
    int randomIndex = rand() % poolSize;
    char* temp_name = namesPool[randomIndex];
    namesPool[randomIndex] = NULL;
    if (temp_name == NULL) {
        return getRandomName(namesPool, poolSize);
    }
    return temp_name;
}

typedef struct Employee {
    char name[20];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
} Employee;

struct Department {
    char dept_name[20];
    struct Employee employees[5];
};

int main() {
    srand(time(NULL));
    char* namesPool[20] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry", "Ivy", "Jack",
                           "Katherine", "Leo", "Mia", "Nathan", "Olivia", "Peter", "Quinn", "Rachel", "Sam", "Toby"};
    char* roles[5] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    struct Department total[4];
    strcpy(total[0].dept_name, "HR");
    strcpy(total[1].dept_name, "Finance");
    strcpy(total[2].dept_name, "Marketing");
    strcpy(total[3].dept_name, "Logistics");

    int i, j;
    char Best_department[20];
    int max_sum = 0, total_sum = 0, a;
    for (i = 0; i < 4; i++) {
        printf("%s Department\n", total[i].dept_name);
        printf("%7c%-12s|%9s%4c|%15s%-2c|%11s%-2c|%12s%-2c|\n",
               ' ', "Name", "Role", ' ', "Communication", ' ', "Team Work", ' ', "Creativity", ' ');

        for (j = 0; j < 5; j++) {
            strcpy(total[i].employees[j].name, getRandomName(namesPool, 20));
            strcpy(total[i].employees[j].role, roles[j]);
            total[i].employees[j].creativity = rand() % 100 + 1;
            total[i].employees[j].teamwork = rand() % 100 + 1;
            total[i].employees[j].communication = rand() % 100 + 1;

            total_sum += total[i].employees[j].creativity + total[i].employees[j].teamwork + total[i].employees[j].communication;

            printf("%2c%-17s|%2c%-11s|%10d%-7c|%8d%-5c|%8d%-6c|\n",
                   ' ', total[i].employees[j].name, ' ', total[i].employees[j].role, total[i].employees[j].communication,
                   ' ', total[i].employees[j].teamwork, ' ', total[i].employees[j].creativity, ' ');
        }
        	printf("\nTotal Sum of Department%s is %d:\n",total[i].dept_name,total_sum);
        if (max_sum < total_sum) {
            max_sum = total_sum;
            strcpy(Best_department, total[i].dept_name);
            a = i;
        }

        total_sum = 0;
        printf("\n\n");
    }

    printf("\n\n%s Best Department\n", Best_department);
    printf("%7c%-12s|%9s%4c|%15s%-2c|%11s%-2c|%12s%-2c|\n",
           ' ', "Name", "Role", ' ', "Communication", ' ', "Team Work", ' ', "Creativity", ' ');

    for (i = a; i <= a; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2c%-17s|%2c%-11s|%10d%-7c|%8d%-5c|%8d%-6c|\n",
                   ' ', total[i].employees[j].name, ' ', total[i].employees[j].role, total[i].employees[j].communication,
                   ' ', total[i].employees[j].teamwork, ' ', total[i].employees[j].creativity, ' ');
        }
    }

    return 0;
}

