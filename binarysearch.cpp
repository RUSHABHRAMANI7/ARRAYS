#include<iostream>
#include<vector>
using namespace std; 
int binarysearch(vector<int>&v, int n,int m ){
int high = n-1 ; 
int low = 0; 

while(low<=high){
     int mid = (high+low)/2 ; 
    if(v[mid]==m){// if the element is found then the index is returned 
        return mid ; }
    else if(v[mid]<m)//if the element is found then the index is returned 
        high = mid -1 ; 
    
    else{// if the element is greater than the mid element than the lower is set to mid +1 
        low = mid +1 ;
    }

    }
return -1 ; // base condition if the element is not present in the array
}




int main(){
    int n; // we input the size of the array 
    cout << "Enter the size of the array : " << endl ; 
    cin>>n; 
    vector<int>v;  // we make the vector array  
    int ele; 
    for(int i = 0 ; i<n; i++){// taking the input of the array elements 
        cout << "Enter the element : " ; 
        cin>>ele; 
        v.push_back(ele); 
    }
      int m ; // taking the input of the element to be found
      cout << "Enter the element : "; 
      cin>>m;
    cout <<  binarysearch(v,n,m); 

}