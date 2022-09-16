#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    
    for (int i=0; i<a.size(); i++){
        if(a[i]<96){
            a[i] += 32;
        }else if(b[i]<96){
            b[i] += 32;
        }
    
    }
    cout << a << endl;
    cout << b << endl;
    if(a>b){
        cout << 1;
    }else if(a < b){
        cout << -1;
    }else if(a==b){
        cout << 0;
    }
    return 0;
}
