#include <stdio.h>
 
int T;
int N;
int s[1000000];
long long gain;
int peak;
int no=1;
int i;
 
int main(){
    scanf("%d", &T);
    for(int j=0;j<T;j++){
        gain = 0;
        scanf("%d", &N);
        for(i=0; i<N; i++){
            scanf("%d", &s[i]);
        }
        i-=1;
        peak = s[i];
        for(i; i>0; i--){
            if (peak>s[i-1]){
                gain += (peak-s[i-1]);
            }
            else
                peak = s[i-1];
        }
 
        printf("#%d %lld\n", no, gain);
        no++;
 
    }
    return 0;
}