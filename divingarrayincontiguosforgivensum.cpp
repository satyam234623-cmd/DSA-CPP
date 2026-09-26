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
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=v[i];
    }
    int prefix=0;
    for(int i=0;i,n;i++){
        prefix=prefix+v[i];
        int ans=totalsum-prefix;
        if(ans==prefix){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"\nyes it is possible";
    }
    else
    cout<<"not possible ";
}
