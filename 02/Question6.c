
#include <stdio.h>

int main() {
    int t,n;
    printf("Enter Target Integer:");
    scanf("%d", &t);
    
    printf("Enter Total numbers:");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter Numbers:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
     
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j] == t){
                printf("(%d,%d),", arr[i],arr[j]);
                arr[i] =0;
            }
        }
    }
    return 0;
}
