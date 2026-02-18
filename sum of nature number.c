#include<stdio.h>
int main()
{
    int N;
    long sum=0;
    int i=1;
    scanf("%d",&N);
    while(i<=N){
        sum+=i;
        i++;
    }
    printf("%1d",sum);
    return 0;

}
