//AT FIRST I TRIED CRATING A NEW ARRAY3 AND PASTING DATA ONE BY ONE , CODE WAS WORKING JUST FINE BUT IT HAD A PROBLEM
//THAT WHAT WOULD BE THE SIZE OF THE UNION ARRAY3 , SO THAT PART WAS THE PROBLEM. BUT I FOUND ANOTHER WAY
//I HAVENOT CREATED ANY OTHER ARRAY , I JUST MOVED THE POINTER AND PRINTED THE STUFF


#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int m=4;
    int arr1[n]= {1, 3, 4, 5, 7};
    int arr2[m]={2, 3, 5, 6} ;
    
    //union
    
    int i=0,j=0,k=0;
   
    
    
    while(i<n && j<m){
        
        
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            
            k++;i++;
        }
        
        else if(arr2[j]<arr1[i]){
            cout<<arr2[j]<<" ";
          
            k++;
            j++;
        }
        
        else if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
       
            i++;j++;k++;
        }
       
    }
    //printing the rest of the element
    while(i<n){
        cout<<arr1[i]<<" ";
        i++;
    }
    
    while(j<m){
        cout<<arr2[j]<<" ";
        j++;
    }
    
    
    
  
    return 0;
}
