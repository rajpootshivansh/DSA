#include <iostream>
using namespace std;
int main()
{



      //       find last didit



  // int n;
  // cin >> n;
  // int lastdigit;
  // int count;

  // while (n > 0)//
  // {
  //   lastdigit = n % 10;
  //   cout << lastdigit << endl;
  //   count = count + 1;
  //   n = n / 10;
  // }


// reverse  a number 


  // int revn = 0 ;

  //  while (n>0)
  // {
  //    lastdigit= n%10;
  //    n=n/10;

  //    revn=(revn*10)+lastdigit;

  // }
  //    cout<<revn;




  // int revn = 0 ;
  // int dup=n;

  // while (n>0)
  // {
  //    lastdigit= n%10;
  //    n=n/10;

  //    revn=(revn*10)+lastdigit;

  // }
  //    cout<<revn<<endl;
  // if (revn==dup) cout<<"yes";

  // else cout<<"no";



// finding summ of number;





  // int sum = 0 ;
  // int dup=n;

  // while (n>0)
  // {
  //    lastdigit= n%10;
  //    n=n/10;

  //    sum=sum+(lastdigit);

  // }
  //    cout<<sum<<endl;
  // if (sum==dup) cout<<"yes";

  // else cout<<"no";

  // int n;
  // cin>>n;
  // for (int  i = 1; i <= n; i++)
  // {
  // if (n%i==0)
  // {
  // cout<<i<<endl;
  // }

//}








                      //    check for its prime 
  // int n;
  // cin >> n;
  // int count = 0;
  // for (int i = 1; i * i <= n; i++)
  // {
  //   if (n % i == 0)
  //     count++;
  //   if ((n/i) == 1)
  //   count++;


  // }
    

  //     if (count <=2)
  //     {
  //       cout << "true";
  //     }

  //     else cout<<"false";

    
  

  int a,b;
  cin>>a;
  cin>>b;

    while (a>0&& b>0)
    {
      if (a>b)  a=a%b;
      else b=b%a;

    }

    if (a==0)  cout<<b;
    else cout<<a;
}