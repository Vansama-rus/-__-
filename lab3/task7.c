#include <stdio.h>
int main(){
int n=2, flag = 0, a; 
scanf("%d",&a);
if (n==a) {flag = 1;}
while(a%n!=0){
        if (a<n){break;}
        if (a==n+1){
            flag = 1;break;}
 
            n++;
}
printf("%d",flag);
    return 0;
}