#include <stdio.h>

int main(){
    int x,y;
    while(scanf("%d %d",&x,&y) != EOF){
        if(x*x + y*y < 200*200){
            printf("inside\n");
        }else{ 
            printf("outside\n"); 
        }
    }
}