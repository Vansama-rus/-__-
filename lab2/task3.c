#include <stdio.h>
int main(){
    double x, y;
    printf("введите x и y:");
    scanf("%lf %lf",&x, &y);
    if(0<=x && x<=1 && 0<=y && y<=1){//первая четверть
        printf("YES");
    }else if (x<0 && y<0){//третья четверть
        printf("NO");
    }else if (-1<=x && x<=0 && y>=0 && 1>=y && y==-1*x){//вторая четверть
        printf("YES");
    }else if (x>=0 && 1>=x && y>=-1 && y<=0 && x==-1*y){//четвертая четверть
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
