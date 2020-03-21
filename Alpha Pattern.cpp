#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8549/661/alpha-pattern"

#Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int i,j,n;
    char ch=65;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<=i)
            	std::cout<<ch;
            else 
                std::cout<<" ";
        }
        ch++;
        std::cout<<"\n";
    }
	
}
