#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int day;
double t;

bool Result(double h,double u,double d,double f){
    day++;
    if(u >= 0)
        t += u;
    if(t > h) return true;
    t -= d;
    if(t < 0) return false;
    u -= f;
    return Result(h,u,d,f);
}

int main(){
    double h,u,d,f;
    while(scanf("%lf %lf %lf %lf",&h,&u,&d,&f) == 4){
        if(h == 0) break;
        t = day = 0;
        if(Result(h,u,d,(u*f)/100))
            printf("success on day %d\n",day);
        else printf("failure on day %d\n",day);
    }
    return 0;
}
