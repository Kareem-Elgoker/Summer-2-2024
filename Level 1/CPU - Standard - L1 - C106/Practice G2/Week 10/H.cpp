#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ;
    cin >> t ; 
    while(t--){
        int n , m ; 
        cin >> n >> m ; 
        int x ; 
        map<int,bool>mp ; 
        for(int i=0 ; i<n ; ++i){
            cin >> x ; 
            mp[x] = true ; 
        } 
        
        int canceled = 0 ; 

        for(int i=0 ; i<m ; ++i){
            cin >> x ; 
            if(mp[x]){
                canceled ++ ; 
            }
        }

        cout << canceled << "\n" ; 
    }
    return 0 ; 
}