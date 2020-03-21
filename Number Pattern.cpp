#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8549/472/number-pattern"

#Print the following pattern for the given N number of rows.
Pattern for N = 4
1234
123
12
1

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int i,j,n;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=1;j<=n;j++){
            if(j<=i)
            	std::cout<<j;
            else 
                std::cout<<" ";
        }
        std::cout<<"\n";
    }
	
}
