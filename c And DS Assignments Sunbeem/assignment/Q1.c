//Name - Vaishnavi Mali
//Cource -DMC
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