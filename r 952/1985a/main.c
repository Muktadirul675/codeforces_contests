#include <stdio.h>

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        char a[3],b[3];
        scanf("%s %s",a,b);
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        printf("%s %s\n",a,b);
    }
    return 0;
}
