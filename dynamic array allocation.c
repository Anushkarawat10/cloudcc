#include<stdio.h>
#include<stdlib.h>
void main()
{
    int row,col,*arr,i,j;
    printf("Enter no of rows and columns: \n");
    scanf("%d %d",&row,&col);
    arr=(int*)malloc(sizeof(int)*row*col);
    printf("Enter the elements: ");
    for(i=0;i<(row*col);i++)
        scanf("%d",&arr[i]);
    printf("The elements in the 2D array are: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i*col+j]);
        }
        printf("\n");
    }
    free(arr);
}
