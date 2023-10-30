#include<bits/stdc++.h>
using namespace std;


int main(){
    string S;
    cin>>S;
    
    int hash[256] = {0};
    for(int i=0; i<S.size(); i++){
        hash[S[i]]++;
    }
    
    int q;
    cin>>q;
    while(q--){
        cout<<q<<" ";
        char ch;
        cin>>ch;
        cout<<hash[ch]<<endl;
    }
    
    return 0;
}
