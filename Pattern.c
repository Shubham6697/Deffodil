#include<stdio.h>
#include<limits.h>
int main(){
    int len,i,j,min = INT_MAX;
    scanf("%d",&len);
    int *arr = (int*)malloc(len*sizeof(int));
    for(i=0;i<len;i++){
        scanf("%d",arr+i);
        if(min > *(arr+i))
            min = *(arr+i);
    }

    for(i=0;i<len;i++){
        if(arr[i]<0){
            for(j=0;j<abs(min-arr[i]);j++)
                printf(" ");
            for(j=0;j<abs(arr[i])+1;j++)
                printf("*");
        }
        else{
            for(j=0;j<abs(min);j++)
                printf(" ");
            for(j=0;j<abs(arr[i])+1;j++)
                printf("*");
        }
        printf("\n");
    }


    return 0;
}
