#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* tokenize(char line[100], char id[3]){
    char delim[2]=" ";
    char *temp = strtok(line, delim);
    while(temp != NULL){
        if(strcmp(id, temp) == 0){
            return strtok(NULL, "\n");
        }
        temp = strtok(NULL, delim);
    }
    return NULL; // Return NULL if ID is not found
}

int main(){
    char enter_id[3];
    printf("Enter ID: ");
    scanf("%s", enter_id);

    char name[20], line[100], salary[10],line2[100],comb[100];
    FILE *a = fopen("persnol.txt", "r");
    if(a == NULL){
        printf("Error opening file");
        return 1;
    }
	 while (fgets(line, sizeof(line), a) != NULL) {
        char *found_name = tokenize(line, enter_id);
        if (found_name != NULL) {
            strcpy(name,found_name);
            printf("Name: %s\n", name);
            break; // Stop searching once the name is found
        }
    }
    fclose(a);
    
    
     FILE *b = fopen("department.txt", "r");
    if(b == NULL){
        printf("Error opening file");
        return 1;
    }
	 while (fgets(line2, sizeof(line2), b) != NULL) {
        char *found_salary = tokenize(line2, enter_id);
        if (found_salary != NULL) {
            strcpy(salary,found_salary);
            printf("Salary: %s", salary);
            break; // Stop searching once the salary is found
        }
    }
    fclose(b);
    	strcat(comb,enter_id);
    	strcat(comb," ");
    	strcat(comb,name);
    	strcat(comb," ");
    	strcat(comb,salary);
    	strcat(comb,"\n");
    	
    printf(" \nall data %s", comb);	
    
    FILE *c= fopen("combine.txt","a+");
    if(c == NULL){
    	printf("Error in opening file");
	}
    fprintf(c,comb)	;
    fclose(c);
	
    return 0;
}

