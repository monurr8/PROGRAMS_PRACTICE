//BRUTEFORCE METHOD (easy method)
#include <iostream>

using namespace std;

int main()
{
   int n=3;int m=3;
   int A[n][m]={{1,2,3},{4,5,6},{7,8,9}};
   
   int key=4;
   
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(A[i][j]==key){
               cout<<"The key is found at "<<i+1<<" "<<j+1<<endl; //i and j will the index and i+1 and j+1 give the postion in the matrix
           }
       }
   }

    return 0;
}
//This procedure is of order O(n*n) , but we can do much better 

//BETTER APPROACH TO SOLVE THIS QUESTION

//I will do it , but first i have to complete other questions.
