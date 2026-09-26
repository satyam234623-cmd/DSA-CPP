#include<bits/stdc++.h>
using namespace std;

int main() {
    bool flag=false;
     
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    cout<<"\n";
    int x;
    cout<<"enter the value of the target:";
    cin>>x;
    cout<<"\n";
  

 
  vector<int>v(n);

  
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int start=i;
        int end=n-1;
        if(v[i]==0 && x==0){
            flag=true;
            break;
        }
        else{
        
            while(start<end){
                int mid=start+(end-start)/2;
                int req_ans=(x/v[i]);
                if(v[mid]==req_ans){
                    flag=true;
                    break;
                }
                else
                if(v[mid]<req_ans){
                    start=mid+1;
                }
                else
                end=mid-1;
            }
        
    }
}
    if(flag==true){
        cout<<"\nthere exists required product in the array";
    }
    else
    cout<<"\nthere is no existence ot the required product in the array";
return 0;
}
