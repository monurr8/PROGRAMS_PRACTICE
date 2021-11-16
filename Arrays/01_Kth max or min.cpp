
//Find the kth max and min element


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr +n);    //n*log(n)
    
    int k;
    cout<<" enter the kth max element to find in the given array"<<endl;
    cin>>k;
    
   cout<<"kth max element is "<<arr[k-1]<<endl;
   
   cout<<" kth min element is "<<
   
    
    
    return 0;
}
