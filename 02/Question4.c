#include <stdio.h>
#include <stdbool.h>
void solvingmaze(char maze[5][5]) {
    bool exit=false;
    int pathi[100],pathj[100];
    int i=0,j=0,count=0;
    while(exit == false){

       if(maze[i][j+1]=='0' && j<5){
          j++;
          printf("(%d,%d),",i,j);
       }
       else if(maze[i+1][j]=='O'&& i<5){
          i++;
          printf("(%d,%d),",i,j);
       }
       if(maze[i][j+1]=='W'){
         i++;
       }
       if(maze[i+1][j]=='W'){
           j++;
       }
       if(maze[i][j+1]=='E'|| maze[i+1][j]=='E'){
           exit=true;
       }
           
    }// end while
   
}

int main() {
    char maze[5][5] = {'S', 'O', 'O', 'W', 'W',
                      'O', 'W', 'O', 'O', 'W',
                      'O', 'O', 'O', 'W', 'O',
                      'W', 'W', 'O', 'W', 'O',
                      'W', 'W', 'O', 'E', 'W'};

    solvingmaze(maze);
    return 0;
}
