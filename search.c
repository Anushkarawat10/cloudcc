#include<stdio.h>
#include<stdlib.h>
int search(int*,int,int);
void main()
{
    int i,n,*arr,key,result;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    if(arr==NULL)
    {
        printf("memory allocation failed\n");
        return;
    }
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter elements to be searched: \n");
    scanf("%d",&key);
    result=search(arr,n,key);
    if(result==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at %d position\n",(++result));
    }
    free(arr);
}
int search(int*arr,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}