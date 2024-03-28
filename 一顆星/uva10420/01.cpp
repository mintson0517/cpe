#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    int totalcase;
    string str;
    cin >> totalcase;

    map<string, int> mp;
    while(totalcase--){
        cin >> str;
        mp[str]++;
        getline(cin,str);
    }
    for(auto i: mp){
        cout << i.first << " " << i.second << endl;
    }
}