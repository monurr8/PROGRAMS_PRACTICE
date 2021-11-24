#include <iostream>

using namespace std;

int main()
{
    int n=3;int m=3;
    int A[n][m]={{1,2,3},
                {4,5,6},
                {7,8,9}};
    
    int row_start=0;
    int row_end=n-1;
    int col_start=0;
    int col_end=m-1;
    
    while( row_start<=row_end && col_start<=col_end){
        
        for(int col=col_start;col<=col_end;col++){
            cout<<A[row_start][col]<<" ";          
        }
            row_start++;
        
        for(int row=row_start;row<=row_end;row++){
            cout<<A[row][col_end]<<" ";
        }        
            col_end--;
        
        for(int col=col_end;col>=col_start;col--){
            cout<<A[row_end][col]<<" ";
        }
            row_end--;
        
        for(int row=row_end;row>=row_start;row--){
            cout<<A[row][col_start]<<" ";
        }
            col_start++;
            
    }

    return 0;
}
