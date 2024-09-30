#include <iostream>
using namespace std;

int main() {
    int t, n, counter_t=0;
    string result = "";
    cin>>t;
    while(true) {
        cin>>n;
        int num=n;
        int  counter_d=0;
        while(num>0) {
            num=num/10;
            counter_d++;
        }
        for(int i=1; i<=counter_d; i++) {
            result+=to_string(n%10)+" ";
            n=n/10;
        }
        result+="\n";
        counter_t++;
        if(counter_t==t) {
            break;
        }
    }
    cout<<result;
    return 0;
}
