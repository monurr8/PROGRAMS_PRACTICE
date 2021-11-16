
#include <iostream>

using namespace std;

void intersection(int arr1[],int arr2[], int n,int m){
    int i=0;int j=0;
   while(i<n && j<m){
       if(arr1[i]<arr2[j]){
           i++;
       }
       else if(arr2[j]<arr1[i]){
          j++;
       }
       else if(arr1[i]==arr2[j]){
           cout<<arr1[i]<<" ";
           i++;j++;
       }
   }
   
   
}

int main()
{
    int n=5;
    int m=4;
    int arr1[n]= {1, 3, 4, 5, 7};
    int arr2[m]={2, 3, 5, 7} ;
    
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
    cout<<endl;
    
    
    //INTERSECTION PART
    
    intersection(arr1,arr2,n,m);
    
    
    
  
    return 0;
}
