#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,s,ans;
    scanf("%d%d%d",&x,&y,&m);
    s=pow(x,y);
    ans=s%m;
    printf("%d",ans);
    
}