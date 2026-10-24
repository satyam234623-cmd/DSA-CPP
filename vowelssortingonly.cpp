#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the text ";
    cin>>s;
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    string ans;
    // counting of vowels only
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
        }
    }
      for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    // sorting of the stored vowels
    // uppercase first then lowercase due to their ASCII values
    for(int i=0;i<26;i++){
        char c='A'+i;
        while(upper[i]){
            ans+=c;
            upper[i]--;
        }
    }
       for(int i=0;i<26;i++){
        char c='a'+i;
        while(lower[i]){
            ans+=c;
            lower[i]--;
        }
    }
    // placing to the main strings(s);
    int start=0;
    int end=0;
    while(end<ans.size()){
        if(s[start]=='#'){
            s[start]=ans[end];
            end++;
        }
        start++;
    }
    cout<<"\nthe answer after the only vowels sorting is :";
    cout<<s;
    return 0;




}
