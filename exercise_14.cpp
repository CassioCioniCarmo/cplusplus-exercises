/**
    Exercise - 14: StringStream

    Sample Input
    23,4,56

    Sample Output
    23
    4
    56

    Cassio Cioni Carmo - 04/15/2023
**/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    char ch;
    int i, a;
    vector<int> list;
    while(ss){
        ss >> a >> ch;
        list.push_back(a);
        
    }
    return list;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}