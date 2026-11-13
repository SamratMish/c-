// #include <iostream>
//     using namespace std;
//      int main() {
//          int  x =20;
         
//          for(int i=0;i<=x;i++)
//          { cout<< i ;
//         cout<<endl;
//     } return 0;

//      } 
// sum from 1 to n no.???
#include <iostream>
    using namespace std;
    int main() {
        int n ,sum=0;
        cout<<"Enter the value of n";
        cin>>n;
        for(int i=1; i<=n;i++) {
            sum=sum+i;
             }
             cout<<sum;
            cout<<endl;
             return 0;
    }