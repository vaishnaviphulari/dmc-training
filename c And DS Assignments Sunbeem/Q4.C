//Name-Vaishnavi Mali
//Cource-DMC
#include<stdio.h>
void accept(int a[3][3])
{
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}
void path(int a[3][3])
{
    int i,j;
if(a[0][0]==1)
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(a[i][j]==9)
          {
            if(a[i-1][j]==1|| a[i][j-1]==1|| a[i+1][j]==1||a[i][j+1]==1)
            {
                printf("\n path possible:");
            }
            else
            {
                printf("\n path is not possible:");
            }
            
        }
    }
}
}
else
{
    printf("\n path is not available:");
}

}
int main(void)
{
    int a[3][3];
    printf("enter the element:\n");
    accept(a);
    printf("elements are:\n");
    display(a);
    path(a);
    return 0;
}
