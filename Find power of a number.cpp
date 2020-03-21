#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8549/467/find-power-of-a-number"

#Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
    int i,n;
    cin>>i>>n;
    cout<<long(pow(i,n));
	
}
