#include<stdio.h>
#include<stdlib.h>
struct array
{
    int*a;
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\n elements are:");
    for(i=0;i<arr.length;i++);
    printf("%d",arr.a[i]);
}
int main()
{
    struct array arr;
    int n,i;
    printf("enter your array size");
    scanf("%d",&arr.size);
    arr.a=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("\n enter your nummber of elements :");
    scanf("%d",&n);
    printf("\n now enter your array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.a[i]);
        arr.length=n;
    }
    display(arr);
}
