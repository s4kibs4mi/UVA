#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<iostream>
#include<algorithm>

using namespace std;

int steps, lSteps;

char G[12][12];
int tempG[12][12];

bool robot(int a,int b,int y){
    memset(tempG,0,sizeof(tempG));
    bool check = true;
    int x = 0;
    steps = 0;
    lSteps = 0;
    getchar();
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++)
            cin >> G[i][j];
    }
    while(check){
        if(G[x][y] == 'N'){
            steps++;
            tempG[x][y] = steps;
            x--;
        }
        else if(G[x][y] == 'S'){
            steps++;
            tempG[x][y] = steps;
            x++;
        }
        else if(G[x][y] == 'E'){
            steps++;
            tempG[x][y] = steps;
            y++;
        }
        else{
            steps++;
            tempG[x][y] = steps;
            y--;
        }

        if(x < 0 || x >= a || y < 0 || y >= b)
            return true;
        if(tempG[x][y] != 0){
            lSteps = steps - (tempG[x][y] - 1);
            steps = abs(steps - lSteps);
            return false;
        }
    }
    return check;
}

int main(){
    int a,c,b;
    while(scanf("%d %d %d",&a,&b,&c) == 3){
        if(a == 0 && b == 0 && c == 0)
            break;
        if(robot(a,b,c-1))
            printf("%d step(s) to exit\n",steps);
        else
            printf("%d step(s) before a loop of %d step(s)\n",steps,lSteps);
    }
    return 0;
}
