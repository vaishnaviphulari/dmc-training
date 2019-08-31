//Name-Vaishnavi Mali
//Cource-DMC
#include<stdio.h>
int main(void)
{
    int arr[6],k,i,j,add;
    printf("\n enter the value of k:\n");
    scanf("%d",&k);
    printf("enter the elements of array:");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            add=arr[i]+arr[j];
            if(add<k && add>(k-2))
            {
                printf("element are :(%d,%d)",arr[i],arr[j]);
            }
        }
    }

  return 0;  
}
