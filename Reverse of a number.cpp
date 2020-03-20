# created by prateek saini
# https://codezen.codingninjas.com/practice/8906/468/reverse-of-a-number

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
    int n,rem=0;
    cin>>n;
   while(n!=0){
       rem=rem*10+n%10;
       n/=10;
   }
	cout<<rem;
}
