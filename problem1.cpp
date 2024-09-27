#include <iostream>;
using namespace std;

int main() {

    int n;;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=n;j>=i;j--) {
            cout<<n+1-j;
        }

        for(int k=1;k<i*2-1;k++) {cout<<" ";}

        for(int j=n;j>=i;j--) {
            cout<<j+1-i;
        }

        cout<<endl;
    }

    return 0;
}