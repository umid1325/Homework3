#include <iostream>;
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    int floor=2;
    int current_floor_start=3;

    if(n==1 or n==2) {
        cout<<1;
    }else {
        while (1) {
            if(n>=current_floor_start and n<=current_floor_start+x-1) {
                cout<<floor;
                break;
            }
            current_floor_start+=x;
            floor++;
        }
    }
    return 0;
}
