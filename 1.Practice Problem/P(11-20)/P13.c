#include<stdio.h>
int main()
{

    int n,i,temp;
    int count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&temp);
        if(temp<0){
            count++;
        }
    }
    printf("%d\n",count);

}
