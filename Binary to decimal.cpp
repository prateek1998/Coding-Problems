#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8906/465#/binary-to-decimal"

#Given a binary number as an integer N, convert it into decimal and print.

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int i=0,n,sum=0;
    cin>>n;
    while(n!=0){
        sum+=n%10*pow(2,i);
        n/=10;
        i++;
    }
    std::cout<<sum;
    return 0;
}
