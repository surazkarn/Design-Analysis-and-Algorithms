#include <stdio.h>
int main()
{
    int t, N, swaps, temp, i, j;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &N);
        
        int arr[N];
        swaps = 0;
    
        for(i=0; i<N; ++i){

            scanf("%d", &temp);

            j=i;
            while(j>0 && arr[j-1] > temp){
                arr[j] = arr[j-1];
                ++swaps;
                --j;
            }

            arr[j] = temp;
        }
        printf("%d\n", swaps);
    }

    return 0;
}