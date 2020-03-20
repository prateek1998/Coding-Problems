# created by prateek saini
# https://codezen.codingninjas.com/practice/8906/474/terms-of-ap 

# Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
# N varies from 1 to 1000.

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,i,val;
    cin>>n;
    for(i=1;i<=n;i++){
    	val=3*i+2;
        if(val%4!=0)
            std::cout<<val<<" ";
        else
            n++;
    }
    
}
