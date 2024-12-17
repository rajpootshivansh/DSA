#include <bits/stdc++.h>
using namespace std;

// for print counting


void printcountf(int count, int n)

{
    if (count == n)
    {
        return;
    }

    cout << count << endl;
    count++;
    printcountf(count,n);
}

int main()
{

    int n = 45;
    printcountf(0,45);
}

// void fi()
// {

//     cout<<"1"<<endl;
//     f1();
// }

// int main(){

// f1();
