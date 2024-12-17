#include <bits/stdc++.h>
using namespace std;

int nthroot(int m, int n ){


int low =1;


int high =n;


while ( low <= high){


int mid = (low+ high )/2;
int ans =1;
long long k= pow(mid,m);
if ((k)>= n){


    high= mid -1;

}


else {
ans = mid;
    low= mid +1;

}


}


return low;


}


//  m=3   and n= 27

int main (){

int k = nthroot(4,64);

cout << k;



}



