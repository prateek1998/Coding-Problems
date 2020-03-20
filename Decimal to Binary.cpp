#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8906/475/decimal-to-binary"


# Given a decimal number (integer N), convert it into binary and print.
# The binary number should be in the form of an integer.
# Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So take the answer as long

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int i,ar[100],k=-1;
    cin>>i;
    while(i!=0){
        
        ar[++k]=i%2;
        i/=2;
    }
    for(i=k;i>=0;i--)
	std:cout<<ar[i];
}
