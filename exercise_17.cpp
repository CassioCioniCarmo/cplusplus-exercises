/**
    Exercise - 17: Inheritance Introduction

    Sample Output
    I am an isosceles triangle
    In an isosceles triangle two sides are equal
    I am a triangle

    Cassio Cioni Carmo - 04/19/2023
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Triangle{
    public:
    	void triangle(){
     		std::cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		std::cout<<"I am an isosceles triangle\n";
    	}
  		void description(){
            std::cout<<"In an isosceles triangle two sides are equal\n";
        }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}