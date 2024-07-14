#include<stdio.h>
int w[20],p[20],n;
int max(int a ,int b)
{
    return a>b?a:b;
}
int knap(int i,int m)
{
    if(i==n)
        return w[i]>m?0:p[i];
    if(w[i]>m)
        return knap(i+1,m);
    return max(knap(i+1,m),knap(i+1,m-w[i])+p[i]);
}
int main()
{
    int i,m,profit;
    printf("Enter the number of objects:\n");
    scanf("%d",&n);
    printf("Enter the max capacity:\n");
    scanf("%d",&m);
    printf("Enter the weight followed by profit:\n");
    for(i=1;i<=n;i++)
        scanf("%d %d",&w[i],&p[i]);
    profit=knap(1,m);
    printf("Max profit is %d",profit);
    return 0;


}
