#include<stdio.h>
int main()
{
    int i,n,s=0,c=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        s=s+a[i];
        } 
        else
        {
            c=c+a[i];
        }
    }
    if(s>c)
    {
        printf("%d",s-c);
    }
    else{
        printf("%d",c-s);
    }
}