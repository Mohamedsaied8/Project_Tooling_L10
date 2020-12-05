/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void insertionRecursive(int * arr,int len){
    
    if(len<=1)
       return;
    insertionRecursive(arr,len-1);
    int j=len-2;
    int last=arr[len-1];
    
    while(j>=0&&arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
    
    
}
//**********************************************
void printArray(int *arr,int len){
    for(int i=0;i<len;i++)
    {
        printf("A[%d]=%d\n",i,arr[i]);
    }
}
int main()
{
    
    int arr[6]={5,3,2,1,11,8};
    insertionRecursive(arr,6);
    printArray(arr,6);

    return 0;
}
