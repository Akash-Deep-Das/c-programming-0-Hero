#include <stdio.h>
int main()
{
    int n,arr[n],i;
    scanf("%d%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++)
{
    printf("%d\n",arr[n-(i+1)]);
    
}
return 0;
}
