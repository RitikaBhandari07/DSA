#include <stdio.h>
#include <stdlib.h>
struct array
{
    int a[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\n your elements are :");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.a[i]);
}
int delete (struct array*arr,int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->a[index];
        for(i=index;i<arr->length;i++)
            arr->a[i]=arr->a[i+1];
        arr->length--;
        return x;
    }
    return 0;
}
int main()
{
    struct array arr1={{2,3,4,5,6},10,5};
    printf("%d",delete(&arr1,3));
    display(arr1);
    return 0;
}
