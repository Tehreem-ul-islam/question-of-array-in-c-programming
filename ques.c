#include<stdio.h>
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int x,i,j,m;
for (int i = 0; i < 5; i++)
{
    x=arr[i];
arr[i]=arr[9-i];
arr[9-i]=x;
}
for ( i = 0; i < 4; i++)
{
x=arr[i];
arr[i]=arr[3-i];
arr[3-i]=x;

}


for (int i = 0; i < 10; i++)
{
    printf("%d",arr[i]);
}
}