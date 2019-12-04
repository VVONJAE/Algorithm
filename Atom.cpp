#include "stdio.h"

int T;
long long N;
int s[1000][5];
int x;
int y;
int dir;
int K;
long long energy;

int main(){
    scanf("%d", &T);
    for(int b=0;b<T;b++){
        scanf("%d", &N);
        for(int i=0; i<N-1; i++){
            for(int j=0; j<4; j++){
                scanf("%d", &s[i][j]);
            }
            s[i][4] = 0;
        }
        for(int c=0; c<N-1; c++){
            for(int d=c+1; d<N-1; d++){

            }
        }
    }

}

