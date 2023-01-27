#include<bits/stdc++.h>
using namespace std;
int ans(int n, vector<int>a){
    int i=0;
    int j=n-1;
    int count=0;
    while(i<=j){
        if(a[i]==a[j]){
            i++;j--;
        }
        else if(a[i]>a[j]){
            j--;
            a[j]+=a[j+1];
            count++;
        }
        else{
            i++;
            a[i]+=a[i-1];
            count++;
        }
    }
    return count;
    
}
int main(){
    int n;
    vector<int>a;
    int b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b;
        a.push_back(b);
    }
    int x= ans(n,a);
    cout<<x<<endl;
    return 0;
}
