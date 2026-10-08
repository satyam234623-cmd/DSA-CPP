#include<bits\stdc++.h>
using namespace std;
int main(){
    int index;
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"\n";
  //  int coun=0;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
    cout<<"\n";
   }
   cout<<"the array formed before the sorting is:";
   for(int i=0;i<n;i++){
    cout<<arr[i];
    cout<<" ";
   }
   for(int i=n-2;i>=0;i--){
    for(int j=i;j<n-1;j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j],arr[j+1]);
        }
       
    }
   }
   cout<<"\nthe array after the sorting is:";
    for(int i=0;i<n;i++){
    cout<<arr[i];
    cout<<" ";
   }

}
