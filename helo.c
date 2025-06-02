#include<stdio.h>
void fun(int arr[]){
int i=0;
int j=6;
while (i<j)
{
int x=arr[i];
arr[i]=arr[j];
arr[j]=x;
i++;
j--;
}

}
int main()
{
int arr[7]={1,2,3,4,5,6,7};
 fun(arr);
 for (int i = 0; i < 7; i++)
 {
    printf("%d",arr[i]); }
 

}