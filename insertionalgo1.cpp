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
   for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
        else
        break;
    }
   }
   cout<<"\nthe array after the insetion sort is :";
      for(int i=0;i<n;i++){
    cout<<arr[i];
    cout<<" ";
   }
   return 0;

}
