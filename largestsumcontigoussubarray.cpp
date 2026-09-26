#include<bits/stdc++.h>
using namespace std;

int main() {
  // bool flag=false;
     
    int n;
    long long prefix=0;


    cout << "Enter size of array: ";
    cin >> n;
    cout<<"\n";
  vector<int>v(n);

  
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
  //logic
  //basically we are igonoring the contributions of negative prefix to zero as
  //we are intreseted in max sum 
  long long maxi=v[0];
    for(int i=0;i<n;i++){
        prefix+=v[i];
        maxi=max(maxi,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    cout<<"\n the maximum required sum is :";
    cout<<maxi;
    return 0;
}
