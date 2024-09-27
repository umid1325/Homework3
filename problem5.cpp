#include <iostream>;
using namespace std;

int main() {
    int N;
    int i=0;
    cin>>N;
    int counter=0;

    for(i=1;i>0;i++) {
        if (i%3!=0 && i%10!=3) {
            counter++;
        }
        if(N==counter) {
            cout<<i;
            break;
        }
    }
    return 0;
}
