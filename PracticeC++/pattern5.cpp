#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    i=1;
    char ch = 'A';
    while(i<=n)
    {
        j=1;
        while(j<=i){
            cout << ch;
            ch =ch+1;
            j++;
        }
        cout << endl;
        i++;
    }
}