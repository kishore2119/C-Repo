#include<stdio.h>
int fact(int a){
    int p = 1 ;
    for(int i=1;i<=a;i++){
        p *=i;
    }
    return p;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int a;
    scanf("%d",&a);
    int org = a;
    int sum =0,remainder;
    while(a>0){
        remainder = a % 10;
        sum +=fact(remainder);
        a /=10;
    }
    if(sum == org){
        printf("Strong\n");
    }
    else{
        printf("Not Strong\n");
    }
 }
}