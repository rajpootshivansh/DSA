#include <iostream>
using namespace std;
// gcd
void f1(int i, int sum)
{
   if (i < 1)

    {
        cout << sum << endl;
        return;
    }
    f1(i - 1, sum + i);
}



// it is 5+4+3+2+1; type 

int sum(int n){
    if (n==0) return 0;
else
    return n + sum(n-1);

}


// int main(){

// int n =6;

//  cout<<sum(n);

//  return 0;
// }


int factorial(int n){

if (n==1) return 1;
else
 return n*factorial(n-1);
                        

}


int main(){


    int n;
    cin>>n;
f1(n, 0);

 cout<<sum(n);
cout<<factorial(n);
return 0;

}                                                               