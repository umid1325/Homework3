#include <iostream>;
using namespace std;

int main() {
    int n,digit;
    string result="";
    cin>>n;

    for(int i=0;i<n;i++) {
        int num;
        cin>>num;
        while (num!=0) {
            digit=num%10;
            num=num/10;
            result+=to_string(digit)+" ";
        }
        result+="\n";
    }
    cout<<result;
    return 0;
}