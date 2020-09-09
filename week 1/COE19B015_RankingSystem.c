//Program to add and remove student records in a ranking system
#include<stdlib.h>
#include<stdio.h>
//Function to insert a student Element from the array.
int* insertFunction(int,int arr[],int);
//Function to remove a student Elemnt from the array.
int* deleteFunction(int,int arr[],int);
//Function to print the output array.
void printFunction(int arr[],int);
int main()
{
    int n,N,scenario;
    int *arr = malloc (sizeof (int) * N);
    printf("Enter class capacity \n");
    scanf("%d",&N);
    printf("Enter total number of students, class capacity N=%d \n",N);
    scanf("%d",&n);
    printf("Enter the roll numbers of the students according to their rank \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter 1-4 scenario \n");
    scanf("%d",&scenario);
    switch(scenario)
    {
      case 1:
        printf("Scenario 1: 3rd rank for new student \nEnter his/her roll number \n");
        printFunction(insertFunction(2,arr,n),n+1);
        break;
      case 2:
        printf("Scenario 2: Student having first rank left due to branch transfer.\n");
        printFunction(deleteFunction(0,arr,n),n-1);
        break;
      case 3:
      printf("Scenario 3: Student having rank m left due to branch transfer.\nEnter m\n");
      int m;
      scanf("%d",&m);
      printFunction(deleteFunction(m-1,arr,n),n-1);
        break;
      case 4:
      printf("Scenario 4: kth rank for new student \nEnter his/her rank(k) and roll number respectively \n");
      int k;
      scanf("%d",&k);
      printFunction(insertFunction(k-1,arr,n),n+1);
        break;
      default:
      printf("Enter 1-4");
    }
    return 0;
}
int* insertFunction(int changeRl,int arr[],int n)
{
  int newRl;
  scanf("%d",&newRl);
  for(int i=n;i>=changeRl;i--)
    arr[i+1]=arr[i];
  arr[changeRl]=newRl;
  return arr;
}
int* deleteFunction(int changeRl,int arr[],int n)
{
  for(int i=changeRl;i<n;i++)
    arr[i]=arr[i+1];
  return arr;
}
void printFunction(int arr[],int n){
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
