#include <iostream>
using namespace std;

// void f( int i,int n)
// {
    
// if (i>n)
// return;

//     cout<<"shivansh"<<endl;
//    f(i+1,n);
// }

// int main(){
// int n;
// cin>>n;
// f(1,n);
// }

void f( int i,int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    f(i-1, n);
}

int main()
{
    int n;
    cin>>n;
    f(n, 1);
}