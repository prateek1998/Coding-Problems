#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8549/469/number-pattern-1"

#Number Pattern 1
Level EASY
Print the following pattern for the given N number of rows.

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<=i)
                std::cout<<"1";
            else
                std::cout<<" ";
        }
        std::cout<<"\n";
    }
	return 0;
}
