#include <stdio.h>
#include <stdlib.h>

int fun (int *arr, int size, int target,int *index);

int main()
{
    int arr[]={1,3,5,7,9,11};
    int index;
    int flag=0;
    int target;
    printf("Enter the target:\n");
    scanf("%d",&target);
    int result = fun(arr,sizeof(arr)/sizeof(int),target,&index);
    if (result==0) printf("Target not found.\n");
        else printf("Target found at the array at index= %d",index+1);
    return 0;
}


int fun (int *arr, int size, int target,int *index){
    int start=0;
    int end=size-1;
    int mid=0;
    int flag=0;
    while (start<=end){
        mid=(start+end)/2;
        if (target==arr[mid]){
            flag=1;
            *index=mid;
            break;
        }
        else if (target>arr[mid]) start=mid+1;
        else if (target<arr[mid]) end=mid-1;
        }

        return flag;
}
