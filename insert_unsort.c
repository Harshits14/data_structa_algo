#include<stdio.h>
int main()
{
    int n,i,el,pos;
    scanf("%d",&n);
    int arr[n];
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&el,&pos);
    if(pos<1 && pos>n)
    {
        printf("Invalid Position");;
    }else
    {for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=el;
    n++;}
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}