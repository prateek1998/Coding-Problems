#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8906/476/square-root-%28integral%29"

# Square Root (Integral)

# Given a number N, find its square root. You need to find and print only the integral part of square root of N.
# For eg. if number given is 18, answer is 4.

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    std::cout<<floor(sqrt(n));
	
}

