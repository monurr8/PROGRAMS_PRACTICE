
//move all the negative elements to one side

#include <iostream>
using namespace std;
int main()
{
    
    int arr[]={-1,1,-5,7,8,5,-10,9,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
   int arr1[n]={0};
    int k=0;
    int p=n-1;
    
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1[k]=arr[i];
            k++;
        }
        else if(arr[i]>0){
            arr1[p]=arr[i];
            p--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";   
    }
    
    return 0;
}
