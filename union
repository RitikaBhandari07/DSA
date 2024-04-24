#include<stdio.h>
#include<stdlib.h>
struct array
{
    int a[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\n your elements are:");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.a[i]);
}
struct array* union(struct array*arr1,struct array*arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=(struct array *)malloc(sizeof(struct arr));
while(i<arr1->length&&i<arr2->length)
{
    if(arr1->a[i]<arr2->a[j])
        arr3->a[k++]=arr1->a[i++];
    else if (arr2->a[j]<arr1-.a[i])
        arr3->a[k++]=arr2->a[j++];
    else{
        arr3->a[k++]=arr1->a[i++];
        j++;
    }
}
for(;i<arr1->length;i++)
    arr3->a[k++]=arr1->a[i++];
for(;j<arr2->length;j++)
    arr3->a[k++]=arr2->a[j++];
arr3->length=k;
arr3->size=10;
return arr3;
}
int main()
{
    struct array arr1={{2,3,4,5,6},10,5}};
    struct array arr2={{7,8,9,0,33},10,5};
    struct array*arr3;
    arr3=union(&arr1,&arr2);
    display(&arr3);


    return 0;
}
