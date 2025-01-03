#include<stdio.h>
int main(){
    int a;
    while(a){
        scanf("%d",&a);
        if(a == -1){
            break;
        }
        else{
            printf("%d\n",a*a);
        }
    }
}