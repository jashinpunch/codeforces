#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
    int n;
    vector <int> a;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i=1; i<n; i++){
        if(a[i-1]%2 != a[i]%2){
            if(i==1 && a[i]%2 == a[i+1]%2){
                cout << i;
                break;
            }else{
                cout << i+1;
                break;
            }
        }
        
    }
    return 0;
}
