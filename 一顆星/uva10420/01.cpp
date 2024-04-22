#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int T;
    cin >> T;

    string s;
  
    map<string, int> mp;
    while(T--){
        cin >> s;
        mp[s]++;
        getline(cin, s); 
    }

    for(auto& i: mp){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
