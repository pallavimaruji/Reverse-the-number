#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,n,rev=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(;n!=0;)
        {
            int a=n%10;
            rev=rev*10+a;
            n=n/10;
        }
        cout << rev << endl;
        rev=0;
    }
    return 0;
}
