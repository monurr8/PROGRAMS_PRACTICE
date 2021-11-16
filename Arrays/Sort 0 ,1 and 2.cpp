//the first thing that came in mind is this code
//FIRST SOLUTION


#include <iostream>
using namespace std;

int main()
{
    int n=9;
    int arr[9]={0,2,2,1,1,0,1,0,2};
    
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;             //3
        }
        else if(arr[i]==1){
            count1++;           //3
        }
        else{
            count2++;           //3
        }
    }
    int k=0;
    int arr1[9];
    while(count0!=0){
        arr1[k++]=0;
        count0--;
    }
    
    while(count1!=0){
        arr1[k++]=1;
        count1--;
    }
    
    while(count2!=0){
        arr1[k++]=2;
        count2--;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    
    
    return 0;
}




