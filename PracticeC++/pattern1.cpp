#include <iostream>
using namespace std;

int main(){
    int i,n,c,j;
    cin >> n;
    c=1;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout << c;
            if (c<=9){
                cout << "  ";
            }
            else{
                cout << " "; 
            }
            c++;
        }
        cout << "\n";
    }
}