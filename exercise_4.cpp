/**
    Exercice - 3: Conditional Statements
    Given a positive integer , do the following:
    -   If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
    -   If , print Greater than 9.

    Sample Input 0
    5

    Sample Output 0
    five
    
    Cassio Cioni Carmo - 04/06/2023
**/

#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int number = stoi(ltrim(rtrim(n_temp)));

    if (number== 1) {
    printf("one \n");
    }else if (number == 2) {
    printf("two \n");
    }else if (number == 3) {
    printf("three \n");
    }else if (number == 4) {
    printf("four \n");
    }else if (number == 5) {
    printf("five \n");
    }else if (number == 6) {
    printf("six \n");
    }else if (number == 7) {
    printf("seven \n");
    }else if (number == 8) {
    printf("eight \n");
    }else if (number == 9) {
    printf("nine \n");
    }else {
    printf("greater than 9\n");
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}