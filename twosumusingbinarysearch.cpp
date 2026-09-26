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
    // logic
    //  we are doing binary search here 
// we are changing start every times keeping end same and if the looking element for searching is present then 
// the element is also present there and we are using like reqanswer=x(inputed)-v[i]and we will look for required answer 
// the time complexity of the code is n*log(n),with space complexity O(1);
// thanks 
    for(int i=0;i<n;i++){
        int start=i;
        int end=n-1;
       
        while(start<=end){
             int mid=end+(start-end)/2;
            int req_ans=(x-v[i]);
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
    if(flag==true){
        cout<<"\nyes there exist required sum";
    }
    else
    cout<<"required sum is not there";
return 0;
}
