#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    int arr[n] ; 

    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    } 

    int mx = -1 , mn = 101 , mnIdx , mxIdx ; 

    for(int i=0 ; i<n ; ++i){
        if(arr[i]>mx){
            mx = arr[i] ; 
            mxIdx = i ; 
        }

        if(arr[i]<=mn){
            mn = arr[i] ; 
            mnIdx = i ; 
        }
    }

    int ans = mxIdx + (n-mnIdx-1) ;
    if(mxIdx>mnIdx) ans -- ; 
    cout << ans ; 

    return 0 ; 
}