#include<bits/stdc++.h>

using namespace std ; 


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t ; 
    
    while(t--){
        int n ; 
        cin >> n ; 
        deque<int>dq(n) ; 

        for(int i=0 ; i<n ; ++i){
            cin >> dq[i] ; 
        }

        vector<int> shifts(n) ; 

        for(int i=n-1 ; i>=0 ; --i){
            int cnt = 0 ;
            while(dq.back() != i+1){
                dq.push_back(dq.front()) ; 
                dq.pop_front() ; 
                cnt ++ ; 
            }

            shifts[i] = cnt ; 
            dq.pop_back() ; 
        }

        for(int i=0 ; i<n ; ++i){
            cout << shifts[i] << " " ; 
        }
        cout << "\n" ; 
    }

}