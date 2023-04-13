/**
    Exercise - 11: Structs


    Sample Input
    15
    john
    carmack
    10

    Sample Output
    15 john carmack 10

    Cassio Cioni Carmo - 04/13/2023
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

struct Student {
    int age;
    std::string first_name;
    std::string last_name;
    int standard;

};

int main() {
    Student st;
    
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}