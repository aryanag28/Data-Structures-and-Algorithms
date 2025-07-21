#include <iostream>
using namespace std;

int main(){
    int n,a,b,i,sum;
    cin >> n;
    a=0;
    b=1;
    i=1;
    sum=0;
    cout << a << " ";
    cout << b << " ";
    while (i<=n-2)
    {
        sum=a+b;
        cout << sum << " ";
        a=b;
        b=sum;
        i++;
    }
}