#created by prateek saini
#check it in the link "https://codezen.codingninjas.com/practice/8549/471/number-pattern-3"

#Print the following pattern for the given N number of rows.
Pattern for N = 4
1
11
121
1221

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                if((j==i)||(j==1)){
//                     if(i==1)
//                     std::cout<<i; 
//                     else
                    std::cout<<"1";
            		 }  
                else
                    std::cout<<"2";
            else
                std::cout<<" ";
        }
        std::cout<<"\n";
       
    }
	
}
