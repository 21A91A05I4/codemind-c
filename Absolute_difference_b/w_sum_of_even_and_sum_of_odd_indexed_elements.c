
#include<stdio.h>
int main()
{
    int i,j,n,m,a[100],s=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
        else
        {
            o=o+a[i];
        }
    }
    if(s>o)
    {
        m=s-o;
    }
    else
    {
        m=o-s;
    }
    printf("%d",m);
}
