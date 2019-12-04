#include cstdio

int T;
int N;
int s[1000000];
long long gain;
int peak;
int peak_day;
int peak_pre_day;
int no=1;
int k=0;

int main(){
    scanf("%d", &T);
    for(int j=0;j<T;j++){
        gain = 0;
        scanf("%d", &N);
        for(int i=0; i<N; i++){
            scanf("%d", &s[i]);
        }
        peak_day = 0;
        peak_pre_day = 0;
//        printf("peak%d ", peak);
        while(peak_pre_day<N-1){
            peak = s[peak_pre_day];
            for(k = peak_pre_day; k<N; k++){
//                printf("k%d ", k);
                if(peak<s[k+1]){
                    peak = s[k+1];
//                    printf("peak%d ", peak);
                    peak_day = k+1;
//                    printf("peakday%d ", peak_day);
//                printf("\n");
                }
            }
            for(int b = peak_day; b>=peak_pre_day; b--){
//                printf("b%d ", b);
                gain += (peak-s[b]);
//                printf("gain%d ", gain);
//                printf("\n");
            }
            peak_day +=1;
            peak_pre_day = peak_day;
//            printf("peakpreday%d ", peak_pre_day);
//            printf("\n");
        }
        printf("#%d %lld\n", no, gain);
        no++;
    }


}
