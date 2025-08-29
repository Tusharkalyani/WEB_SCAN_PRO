#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0||i==n-1){
            for(int j=0;j<n;j++){
                cout<<"*";
                if(j==n-1){
                    cout<<"\n";
                }
            }
        }else{
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<1;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
}