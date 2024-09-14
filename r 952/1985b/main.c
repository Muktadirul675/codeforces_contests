#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum[102][102];
    for(int i=2;i<=100;i++){
        for(int j=1;j<=100;j++){
            if(j==1){
                sum[i][j] = i*j;
            }else{
                sum[i][j] = i*j + sum[i][j-1];
            }
        }
    }

    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int x, highest = 0, i,j;
        for(i=2;i<=n;i++){
            for(j=1;i*j<=n;j++);
            if(sum[i][j] > highest){
                highest = sum[i][j];
                x = i;
            }
        }
        printf("%d\n",x);
    }

    return 0;
}
