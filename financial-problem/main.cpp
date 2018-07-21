#include <iostream>
using namespace std;
int main() {
    float a[12];
    float b=0;
    int i;
    for(i=0;i<12;i++)
        cin>>a[i];
    for(i=0;i<12;i++)
        b+=a[i]*100;
    cout<<"$"<<b/1200<<endl;

    return 0;
}