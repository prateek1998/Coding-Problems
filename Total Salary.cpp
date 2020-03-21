#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8549/486/total-salary"

#Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -

#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
    float bs,hra,da,allow,pf;
    int ts;
    char grade;
    cin>>bs>>grade;
    hra   = 0.20 * bs;
    da    = 0.50 * bs;
    if (grade == 'A')
        allow = 1700;
    else if(grade == 'B')
        allow = 1500;
    else
        allow = 1300;
    pf = 0.11 * bs;
    ts=round(bs+hra+da+allow-pf);
    std::cout<<ts;
	return 0;
}
