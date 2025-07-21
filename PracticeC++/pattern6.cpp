#include <iostream>
using namespace std;

int main(){
    int n,i,j,k;
    cin >> n;
    i=1;
    while(i<=n)
    {
    j=1;
    while(j<=n-i+1){
            cout << j;
            j++;
        }
    k=1;
    while(k<=i-1){
        cout << "**";
        k++;
    }
    int l =n-i+1;
    while(l>=1){
        cout << l;
        l--;
    }
        cout << endl;
        i++;
    }

}