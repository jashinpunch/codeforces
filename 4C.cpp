#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
    int n;
    bool isSame;
    vector <pair <string, int>> d;
    cin >> n;
    for(int i=0; i<n; i++){
        isSame = false;
        string s;
        cin >> s;
        if(i==0){
            d.push_back(make_pair(s, 0));
            cout << "OK" << endl;
        }else{
            for(int j=0; j<d.size(); j++){
                if(d[j].first==s){
                    //add a cnt and check how many times it was sam
                    d[j].second++;
                    d.push_back(make_pair(s, d[j].second));
                    cout << d[j].first << d[j].second << endl;
                    isSame = true;
                    break;
                }
            }
            if(isSame==false){
                d.push_back(make_pair(s, 0));
                cout << "OK" << endl;
            }
        }
    }
    return 0;
}
