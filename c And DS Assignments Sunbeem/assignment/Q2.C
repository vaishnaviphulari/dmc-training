//Name - Vaishnavi Mali
//Cource - DMC
#include<stdio.h>
int main(void)
{
    int a[]={2,4,10,7},b[10],l=0,k;
    int j,i,min=a[0],max=a[0],flag=0;
    printf("\n max & min no. are");
    for(i=1;i<4;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
printf("\n max=%d,min=%d",max,min);
for(i=min+1;i<max;i++)
{
    flag=0;
    for(j=0;j<4;j++)
    {
        if(i==a[j])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        b[l++]=i;
    }
}
for(i=0;i<l;i++)
{
    printf("\t %d",b[i]);
}
printf("\n enter k");
scanf("%d",&k);
if(k>l)
{
    printf("there is no such element missing:");
}
else
{
    printf("element missing is:%d",b[k-1]);
}

return 0;
}
