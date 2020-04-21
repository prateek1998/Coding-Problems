Wap to take integer which is a odd number(n>=5) and pattern this kind of pattern.
*  ****
*  *
*  *
*******
   *  *
   *  *
****  *

#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    cin>>n;
        //first block
        cout<<"*";
        for(i=1;i<=(n-3)/2;i++)
        cout<<" ";
        for(i=1;i<=(n+1)/2;i++)
        cout<<"*";
        //end of first block
        cout<<"\n";
        //second block
        for(j=1;j<=(n-3)/2;j++){
        cout<<"*";
        for(i=1;i<=(n-3)/2;i++)
        cout<<" ";
        cout<<"*"<<endl;
        }
        //end of second block
        //third block
        for(i=1;i<=n;i++)
        cout<<"*";
         //end of third block
        cout<<"\n";
         //fourth block
        for(j=1;j<=(n-3)/2;j++){
            for(i=1;i<=(n-1)/2;i++)
        cout<<" ";
        cout<<"*";
        for(i=1;i<=(n-3)/2;i++)
        cout<<" ";
        cout<<"*"<<endl;
        }
         //end of fourth block
        //fifth block
          for(i=1;i<=(n+1)/2;i++)
        cout<<"*";
         for(i=1;i<=(n-3)/2;i++)
        cout<<" ";
        cout<<"*";
        //end of fifth block
         return 0;
            }

