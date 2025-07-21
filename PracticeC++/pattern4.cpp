#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i=1;
    while(i<=n)
    {
        j=1;
        char ch = 'A';
        while(j<=n){
            cout << ch;
            ch =ch+1;
            j++;
        }
        cout << endl;
        i++;
    }
}