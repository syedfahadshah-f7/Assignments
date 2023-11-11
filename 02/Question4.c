#include <stdio.h>
void solvingmaze(char maze[5][5],int i,int j) {
 if(maze[i+1][j]  == 'E'||maze[i][j+1] == 'E') return ;

 if(maze[i+1][j] == 'O'){
     maze[i+1][j] = 'T';
     solvingmaze(maze,i+1,j);
 }
 if(maze[i+1][j] == 'W'){
     solvingmaze(maze,i,j+1);
 }
 if(maze[i][j+1] == 'O'){
     maze[i][j+1] = 'T';
     solvingmaze(maze,i,j+1);
 }
 if(maze[i][j+1] == 'W'){
     solvingmaze(maze,i+1,j);
 }
  if(maze[i][j] == 'W' && maze[i+1][j] == 'W'){
      maze[i][j] = 'W';
     solvingmaze(maze,i-1,j-1) ;
     
 }
}
int main() {
    char maze[5][5] = {'S', 'O', 'O', 'W', 'W',
                      'O', 'W', 'O', 'O', 'W',
                      'O', 'O', 'O', 'W', 'O',
                      'W', 'W', 'O', 'W', 'O',
                      'W', 'W', 'O', 'E', 'W'};

    solvingmaze(maze,0,0);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(maze[i][j] == 'T'){
                printf("(%d,%d)", i,j);
            }
        }
    }
    return 0;
}
