//Name - Vaishnavi Mali
//Cource -DMC
/* Program Details : - 
    Given an array arr[] of N integers, the task is to sort the array without changing the position of
    negative numbers (if any) i.e. the negative numbers need not be sorted.
    Examples:
    Input: arr[] = {2, -6, -3, 8, 4, 1}
    Output: 1 -6 -3 2 4 8
    Input: arr[] = {-2, -6, -3, -8, 4, 1}
    Output: -2 -6 -3 -8 1 4
*/
#include<stdio.h> 

void main(){
    int count = 6;
    int a[6];
    printf("Enter array of 5 numners \n");
    for(int i = 0; i<6; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<6; i++){
        int flag = a[i];
        for(int j = i; j<6; j++){
            if(a[j] > 0 && a[j] < flag){
                a[i] = a[j];
                a[j] = flag;
                flag = a[i];
            } 
        }
    }
    printf("array of 5 numners after sorting only positive number \n");
    for(int i = 0; i < 6; i++){
        printf("%d\n", a[i]);
    }
}