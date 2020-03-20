# created by prateek saini
# https://codezen.codingninjas.com/practice/8906/473/sum-or-product

# Write a program that asks the user for a number N and a choice C. And then give him the possibility to choose between computing the sum and computing the product of 1 ,..., N.
# If user enters C is equal to -
# 1 : Print sum of 1 to N numbers
# 2 : Print product of 1 to N numbers
# Any other number : print -1


#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int i,n,sum=1;
    cin>>n>>i;
    if(i==1)
    {for(int x=2;x<=n;x++)
            sum+=x;
		std::cout<<sum;
    }
    else if(i==2)
    {for(int x=1;x<=n;x++)
            sum*=x;
		std::cout<<sum;
    }
    else
    std::cout<<"-1";       
}
