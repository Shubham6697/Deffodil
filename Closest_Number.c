                /* The task is to find closest element to given number in array,if it's tie print greatest number*/
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int x,size,min_diff = INT_MAX, max = INT_MIN;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter element of array : ");
    int i, *arr = (int*)malloc(size*sizeof(int)) , *temp = (int*)malloc(size*sizeof(int));

    for(i=0;i<size;i++)
        scanf("%d",arr+i);

    printf("Enter number x : ");
    scanf("%d",&x);

    for(i=0;i<size;i++){
        *(temp+i) = abs(*(arr+i)-x);
        if(min_diff > *(temp+i))
            min_diff = *(temp+i);
    }

    for(i=0;i<size;i++){
        if(*(temp+i) == min_diff)
            if(max < *(arr+i))
                max = *(arr+i);
    }
    printf("Closest Number is %d",max);
    return 0;
}
