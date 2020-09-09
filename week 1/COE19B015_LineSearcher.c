//Program to find the number k from a set of people in line by linear search
#include<stdlib.h>
#include<stdio.h>
//function to do linear search (if did not find the exact element/s returns zero.)
int linearSearch(int arr[],int);
int main()
 {
  int arr[10],k,flag;
  printf("Enter the numbers selected by 10 people in that order \n");
  for(int i=0;i<10;i++)
  scanf("%d",&arr[i]);
  printf("Enter number you want to search for(k)\n");
  scanf("%d",&k);
  flag=linearSearch(arr,k);
  if(flag==0)
  printf("Element not found");
  return 0;
}
int linearSearch(int arr[],int k)
{
  int flag=0;
  for(int i=0;i<10;i++)
  if(arr[i]==k)
  {
  flag++;
  printf("Position %d has %d \n",(i+1),k);
  }
  return flag;
}
