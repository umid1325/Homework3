#include <iostream>;
#include <math.h>
using namespace std;

int main() {
    int N,A,B,num;
    cin>>N>>A>>B;
    int total_sum=0;

    for(int i=1;i<=N;i++) {
        int sum_digit=0;
        num=i;
        while(num!=0) {
            sum_digit+=num%10;
            num=num/10;
        }
        if(sum_digit>=A and sum_digit<=B) {
            total_sum+=i;
        }
    }
    cout<<total_sum;
    return 0;
}